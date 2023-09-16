#include <stdio.h>

int main(int argc, char *argv[]) {

// printf("These are all the arguments:\n");

if (argc = 1) {
    printf("[!] - Usage: Enter your first and last name");
} else if (argc > 3) {
    printf("[!] - Too many arguments.");
    exit(-1);
}
else {
    printf("Hello %s %s", argv[1], argv[2]);
}

}