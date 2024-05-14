#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>


typedef struct s_client
{
    int id;
    char msg[100000];
}   t_client;

t_client    clients[1024];
fd_set      read_set;
fd_set      write_set;
fd_set      current;
int         bigestFd;
int         clientId;
char        send_buffer[120000];
char        recv_buffer[120000];


void    error(char *msg)
{
    if (msg)
        write(2, msg, strlen(msg));
    else
        write(2, "Fatal error\n", 12);
    exit(1);
}

void    send_to_all(int fdSender)
{
    for (int fd = 0; fd <= bigestFd; fd ++)
    {
        if (FD_ISSET(fd, &write_set) && fd != fdSender)
            if (send(fd, send_buffer, strlen(send_buffer), 0) < 0)
                error(NULL);
    }
}

int main(int argc, char **argv)
{
    char    *ptr;
    if (argc != 2)
        error("Wrong number of arguments\n");
    
    struct sockaddr_in  serveraddr;
    socklen_t           len;
    int                 serverfd;
    serverfd = socket(AF_INET, SOCK_STREAM, 0);
    if (serverfd < 0)
        error(NULL);
    bigestFd = serverfd;
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
        if (select(bigestFd + 1, &read_set, &write_set, 0, 0) < 0)
            continue;
        for (int fd = 0; fd <= bigestFd; fd ++)
        {
            if (FD_ISSET(fd, &read_set))
            {
                if (fd == serverfd)
                {
                    int clientfd = accept(serverfd, (struct sockaddr *)&serveraddr, &len);
                    if (clientfd == -1)
                        continue;
                    if (clientfd > bigestFd)
                        bigestFd = clientfd;
                    clients[clientfd].id = bigestFd ++;
                    FD_SET(clientfd, &current);
                    sprintf(send_buffer, "serveur: client %d just arrived\n", clients[clientfd].id);
                    send_to_all(clientfd);
                }
                else
                {
                    int ret = recv(fd, recv_buffer, sizeof(recv_buffer), 0);
                    if (ret <= 0)
                    {
                        sprintf(send_buffer, "serveur: client %d just left\n", clients[fd].id);
                        send_to_all(fd);
                        FD_CLR(fd, &current);
                        close(fd);
                    }
                    else
                    {
                        ptr = recv_buffer;
                        for (int i = 0, j = 0; j < ret; i ++, j ++)
                        {
                            if (ptr[i] == '\n')
                            {
                                ptr[i] = '\0';
                                sprintf(send_buffer, "client %d: %s\n", clients[fd].id, ptr);
                                send_to_all(fd);
                                bzero(send_buffer, i);
                                ptr += i + 1;
                                i = -1;
                            }
                        }
                    }
                }
                break;
            }
        }
    }

}




