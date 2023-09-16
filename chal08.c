#include <stdio.h>

int main(void) {

int number;

printf("Enter a number between (1 and 500):\n");
scanf("%d", &number);

if (number > 500 || number < 1) {
    printf("[!] - Entry is out of range.\n");
} else if (number > 400) {
    printf("Your number is between 401 and 500.\n");
}
else if (number > 300) {
    printf("Your number is between 301 and 400.\n");
}
else if (number > 200) {
    printf("Your number is between 201 and 300.\n");
}
else if (number > 100) {
    printf("Your number is between 101 and 200.\n");
}
else {printf("Your number is between 101 and 200.\n");}
}