#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>

char    send_msg[6000];
char    recv_msg[6000];
int     clients[1024];
int     maxfd;
fd_set  read_fd;
fd_set  write_fd;
fd_set  current;


void    error(int errorCode)
{
    if (errorCode)
        write(2, "Wrong arg number!\n", 18);
    else
        write(2, "Fatal error\n", 12);
    exit(1);
}

void    broadcast(int exceptfd)
{
    for (int fd = 0; fd <= maxfd; fd ++)
    {
        if (FD_ISSET(fd, &write_fd) && fd != exceptfd)
        {
            if (send(fd, send_msg, strlen(send_msg), 0) < 0)
                error(0);
        }
    }
    bzero(send_msg, sizeof(send_msg));
}


int main(int argc, char **argv)
{
    if (argc != 2)
        error(1);
    
    char                    *ptr;
    struct sockaddr_in      servaddr;
    socklen_t               len;

    int servfd = socket(2, 1, 0);
    if (servfd < 0)
        error(0);
    maxfd = servfd;
    FD_ZERO(&current);
    FD_SET(servfd, &current);
    bzero(&servaddr, sizeof(servaddr));
    bzero(clients, sizeof(clients));
    servaddr.sin_family = 2;
    servaddr.sin_addr.s_addr = htonl(0);
    servaddr.sin_port = htons(atoi(argv[1]));

    if (bind(servfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0 || listen(servfd, 100) < 0)
        error(0);
    
    while(1)
    {
        read_fd = current;
        write_fd = current;

        if (select(maxfd + 1, &read_fd, &write_fd, 0, 0) < 0)
            continue;
        for (int fd = 0; fd <= maxfd; fd ++)
        {
            if (FD_ISSET(fd, &read_fd))
            {
                if (fd == servfd)
                {
                    int clientfd = accept(fd, (struct sockaddr *)&servaddr, &len);
                    if (clientfd < 0)
                        continue;
                    if (maxfd < clientfd)
                        maxfd = clientfd;
                    FD_SET(clientfd, &current);
                    clients[clientfd] = maxfd ++;
                    sprintf(send_msg, "Client %d join.\n", clients[clientfd]);
                    printf("%s", send_msg);
                    broadcast(clientfd);
                }
                else
                {
                    int data = recv(fd, recv_msg, sizeof(recv_msg), 0);
                    if (data <= 0)
                    {
                        FD_CLR(fd, &current);
                        close(fd);
                        sprintf(send_msg, "Client %d left.", clients[fd]);
                        broadcast(fd);
                    }
                    else
                    {
                        ptr = recv_msg;
                        for (int i = 0, j = 0; j < data; j ++, i ++)
                        {
                            if (ptr[i] == '\n')
                            {
                                ptr[i] = '\0';
                                sprintf(send_msg, "Client %d, : %s\n", clients[fd], ptr);
                                broadcast(fd);
                                ptr += i + 1;
                                i = -1;                               
                            }
                        }
                    }
                }
            }
        }
    }
}