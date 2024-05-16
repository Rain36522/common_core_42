#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

char    send_msg[6000];
char    recv_msg[6000];
int     clients[1024];
int     maxfd;
fd_set  read_fd;
fd_set  write_fd;
fd_set  current;

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
        if (FD_ISSET(fd, &write_fd) && fd != fd_except)
        {
            if (send(fd, send_msg, strlen(send_msg), 0) < 0)
                error(NULL);
        }
    }
}



int     main(int argc, char **argv)
{
    if (argc != 2)
        error("Wrong argument number");

    struct sockaddr_in  servaddr;
    socklen_t           len;
    char                *ptr;
    int serverfd = socket(2, 1, 0);
    if (serverfd < 0)
        error(NULL);
    maxfd = serverfd;
    FD_ZERO(&current);
    FD_SET(serverfd, &current);
    bzero(clients, sizeof(clients));
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = 2;
    servaddr.sin_addr.s_addr = htonl(0);
    servaddr.sin_port = htons(atoi(argv[1]));

    if (bind(serverfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0 || listen(serverfd, 100) < 0)
        error(NULL);

    while (1)
    {
        read_fd = current;
        write_fd = current;
        if (select(maxfd + 1, &read_fd, &write_fd, 0, 0) < 0)
            continue;
        for (int fd = 0; fd <= maxfd; fd ++)
        {
            if (FD_ISSET(fd, &read_fd))
            {
                if (fd == serverfd)
                {
                    int clientfd = accept(fd, (struct sockaddr *)&servaddr, &len);
                    if (clientfd < 0)
                        continue;
                    if (maxfd < clientfd)
                        maxfd = clientfd;
                    clients[clientfd] = maxfd ++;
                    FD_SET(clientfd, &current);
                    sprintf(send_msg, "Client %d join.", clients[clientfd]);
                    broadcast(clientfd);
                    bzero(send_msg, strlen(send_msg));
                }
                else
                {
                    int data_recv = recv(fd, recv_msg, sizeof(recv_msg), 0);
                    if (data_recv <= 0)
                    {
                        FD_CLR(fd, &current);
                        close(fd);
                        sprintf(send_msg, "Client %d left.", clients[fd]);
                        broadcast(fd);
                        bzero(send_msg, sizeof(send_msg));
                    }
                    else
                    {
                        ptr = recv_msg;
                        for (int i = 0, j = 0; j < data_recv; i ++, j ++)
                        {
                            if (ptr[i] == '\n')
                            {
                                ptr[i] = '\0';
                                sprintf(send_msg, "Client %d send : %s\n", clients[fd], ptr);
                                broadcast(fd);
                                bzero(send_msg, i);
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



// struct sockaddr_in  serveraddr;
//     socklen_t           len;

// recv(fd, recv_msg, sizeof(recv_msg), 0)
// FD_ISSET(fd, &write_set) && fd != fd_except
// serverfd = socket(AF_INET, SOCK_STREAM, 0);
// FD_ZERO(&current);
// FD_SET(serverfd, &current);
// bzero(clients, sizeof(clients));
// bzero(&serveraddr, sizeof(serveraddr));
// serveraddr.sin_family = AF_INET;
// serveraddr.sin_addr.s_addr = htonl(0);
// serveraddr.sin_port = htons(atoi(argv[1]));
// select(maxfd + 1, &read_set, &write_set, 0, 0) < 0
// FD_ISSET(fd, &read_set)
// accept(serverfd, (struct sockaddr *)&serveraddr, &len);
// FD_CLR(fd, &current);
// bind(serverfd, (const struct sockaddr *)&serveraddr, sizeof(serveraddr)) < 0 || listen(serverfd, 100)
// socket(2, 1, 0)