#include <stdio.h>

int main(void) {

    char fname[20];
    char lname[20];

    printf("Type in your first name: \n");
    scanf("%s", &fname);
    printf("Type in your last name: \n");
    scanf("%s", &lname);

    printf("Your full name is: %s %s", fname, lname);

}