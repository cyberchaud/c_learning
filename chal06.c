#include <stdio.h>

int main(void) {

int num, dem;

printf("Enter a numerator:\n");
scanf("%d", &num);
printf("Enter a demominator:\n");
scanf("%d", &dem);

if (num % dem == 0) {
    printf("There is no remainder.\n");
} else {
    printf("There is a remainder.\n");
}

}