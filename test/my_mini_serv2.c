#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>


int     clients[1024];
int     maxfd;
fd_set  read_set;
fd_set  write_set;
fd_set  current;
int     clientId;

char    recv_msg[6000];
char    send_msg[6000];

void    error(char *msg)
{
    if (msg)
        write(2, msg, strlen(msg));
    else
        write(2, "Fatal error\n", 12);
    exit(1);
}


void    broadcast(int fd_except)
{
    for (int fd = 0; fd <= maxfd; fd ++)
    {
        if (FD_ISSET(fd, &write_set) && fd != fd_except)
        {
            if (send(fd, send_msg, strlen(send_msg), 0) < 0)
                error(NULL);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        error("Wrong number of arguments!\n");
    
    char    *ptr;
    struct sockaddr_in  serveraddr;
    socklen_t           len;
    int     serverfd;
    serverfd = socket(AF_INET, SOCK_STREAM, 0);
    if (serverfd < 0)
        error(NULL);
    maxfd = serverfd;
    FD_ZERO(&current);
    FD_SET(serverfd, &current);
    bzero(clients, sizeof(clients));
    bzero(&serveraddr, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serveraddr.sin_port = htons(atoi(argv[1]));


    if (bind(serverfd, (const struct sockaddr *)&serveraddr, sizeof(serveraddr)) < 0 || listen(serverfd, 100) < 0)
        error(NULL);
    while (1)
    {
        read_set = current;
        write_set = current;
        if (select(maxfd + 1, &read_set, &write_set, 0, 0) < 0)
            continue;
        for (int fd = 0; fd <= maxfd; fd ++)
        {
            if (FD_ISSET(fd, &read_set))
            {
                if (fd == serverfd)
                {
                    int clientfd = accept(serverfd, (struct stockaddr *)&serveraddr, &len);
                    if (clientfd < 0)
                        continue;
                    if (clientfd > maxfd)
                        maxfd = clientfd;
                    clients[clientfd] = maxfd ++;
                    FD_SET(clientfd, &current);
                    sprintf(send_msg, "serveur: client %d just arrived\n", clients[clientfd]);
                    broadcast(clientfd);
                }
                else
                {
                    int ret = recv(fd, recv_msg, sizeof(recv_msg), 0);
                    if (ret <= 0)
                    {
                        sprintf(send_msg, "serveur: client %d just left\n", clients[fd]);
                        broadcast(fd);
                        FD_CLR(fd, &current);
                        close(fd);
                    }
                    else
                    {
                        
                    }
                }
            }
        }
    }
}


