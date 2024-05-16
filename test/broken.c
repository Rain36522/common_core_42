#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>


int     clientsIds[1024];
char    recv_msg[6000];
char    send_msg[6000];
fd_set  read_fd;
fd_set  write_fd;
fd_set  current;
int     maxfd;

void    error(void)
{
    write(2, "Fatal error\n", 12);
    exit(1);
}

void    error_arg(void)
{
    write(2, "Wrong arguments number!\n", 24);
    exit(1);
}


void    broadcast(int   fd_except)
{
    for (int fd = 0; fd <= maxfd; fd++)
    {
        if (FD_ISSET(fd, &write_fd) && fd != fd_except)
        {
            if (send(fd, send_msg, strlen(send_msg), 0) < 0)
                error();
        }
    }
}



int main(int argc, char **argv)
{   
    if (argc != 2)
        error_arg();

    char                *ptr;
    struct sockaddr_in  servaddr;
    socklen_t           len;
    int servfd = socket(2, 1, 0);
    if (servfd < 0)
        error();
    maxfd = servfd;
    FD_ZERO(&current);
    FD_SET(servfd, &current);
    bzero(&servaddr, sizeof(servaddr));
    bzero(clientsIds, sizeof(clientsIds));
    servaddr.sin_family = 2;
    servaddr.sin_addr.s_addr = htonl(0);
    servaddr.sin_port = htons(atoi(argv[1]));

    if (bind(servfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0 || listen(servfd, 100) < 0)
        error();
    
    while (1)
    {
        read_fd = current;
        write_fd = current;
        if (select(maxfd + 1, &read_fd, &write_fd, 0, 0) < 0)
            continue;
        for (int fd = 0; fd <= maxfd; fd++)
        {
            if (FD_ISSET(fd, &read_fd)) // read_fd
            {
                if (fd == servfd)
                {
                    int clientfd = accept(fd, (struct sockaddr *)&servaddr, &len);
                    if (clientfd < 0)
                        continue;
                    if (maxfd < clientfd)
                        maxfd = clientfd;
                    FD_SET(clientfd, &current);
                    clientsIds[clientfd] = maxfd ++;
                    sprintf(send_msg, "Client %d join.", clientsIds[clientfd]);
                    broadcast(clientfd);
                    bzero(send_msg, strlen(send_msg));
                }
            }
            else
            {
                int data = recv(fd, recv_msg, sizeof(recv_msg), 0);
                if (data <= 0)
                {
                    FD_CLR(fd, &current);
                    close(fd);
                    sprintf(send_msg, "Client %d just left.", clientsIds[fd]);
                    broadcast(fd);
                    bzero(send_msg, sizeof(send_msg));
                }
                else
                {
                    ptr = recv_msg;
                    for (int i = 0, j = 0; j < data; i ++, j ++)
                    {
                        if (ptr[i] == '\n')
                        {
                            ptr[i] = '\0';
                            sprintf(send_msg, "Client %d send : %s\n", clientsIds[fd], ptr);
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