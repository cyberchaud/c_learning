#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main (void) {

    int filedescriptor;

    filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if (filedescriptor < 0) {
        printf("[!] - The open operation failed...\n");
        return -1;
    } else {
        printf("[-] - The open operation succeeded!!\nls");
        return 0;
    }
}