#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>


char    send_msg[100000];
char    recv_msg[100000];
int     clients[1024];
int     maxfd;
fd_set  read_fd;
fd_set  write_fd;
fd_set  current;

void    broadcast(int except_fd)
{
    for (int fd = 0; fd <= maxfd; fd ++)
    {
        if(FD_ISSET(fd, &write_fd) && fd != except_fd)
            send(fd, send_msg, strlen(send_msg), 0);
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        exit(1);
    struct sockaddr_in  servaddr;
    socklen_t           len;
    char                *ptr;
    int servfd = socket(2, 1, 0);
    if (servfd < 0)
        exit(1);
    FD_ZERO(&current);
    FD_SET(servfd, &current);
    bzero(clients, sizeof(clients));
    bzero(&servaddr, sizeof(servaddr));
    maxfd = servfd;
    int maxid = 0;
    servaddr.sin_family = 2;
    servaddr.sin_addr.s_addr = htonl(0);
    servaddr.sin_port = htons(atoi(argv[1]));

    if (bind(servfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) != 0 || listen(servfd, 100) < 0)
        exit(1);

    while (1)
    {
        read_fd = current;
        write_fd = current;

        if (select(maxfd + 1, &read_fd, &write_fd, 0, 0) < 0)
            continue;
        
    }

}
