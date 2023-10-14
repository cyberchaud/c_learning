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

    int writertn;

    writertn = write(filedescriptor, "Writing test date to the file.\n", 30);
    
    if (writertn != 30)
    {
        printf("[!] The write operation failed...\n");
        return -1;
    }
    else
    {
        printf("[-] The write operation succeeded!\n");
    }

    int closertn;

    closertn = close(filedescriptor);

    if (closertn != 0) {
        printf("[!] The file could not be closed...\n");
        return -1;
    }
    else
    {
        printf("[-] The close operation succeeded!\n");
    }

    return 0;
}
