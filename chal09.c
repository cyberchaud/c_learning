#include <stdio.h>

int main(int argc, char *argv[]) {

// printf("These are all the arguments:\n");

if (argc <= 2) {
    printf("[!] - Usage: Enter your first and last name");
} else if (argc > 3) {
    printf("[!] - Too many arguments.");
}
else {
    printf("Hello %s %s", argv[1], argv[2]);
}

}