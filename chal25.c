#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

int main (void) {

    int filedescriptor;

    filedescriptor = open("testfile", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

    if (filedescriptor < 0) {
        printf("[!] The open operation failed...\n");
        return -1;
    } else {
        printf("[-] The open operation succeeded!!\n");
        
    }

    write(filedescriptor, "Writing test date to the file.", 30);
    return 0;
}