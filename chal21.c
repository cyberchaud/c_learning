#include <stdio.h>
#include <string.h>

#define n 2

struct employee {
    char lname[20];
    char fname[20];
    int id;
    int ssn;
    char title[15];
};

struct employee employees[n];

void main() {

    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter the employee's first name: ");
        scanf("%s", &employees[i].fname);
        printf("Enter the employee's last name: ");
        scanf("%s", &employees[i].lname);
        printf("Enter the employee's ID number: ");
        scanf("%d", &employees[i].id);
        printf("Enter the employee's last 4 digits of SSN: ");
        scanf("%d", &employees[i].ssn);
        printf("Enter the employee's title: ");
        scanf("%s", &employees[i].title);
    }

    for (i = 0; i < 2; i++) {
        printf("Employee information for %s %s:\n", employees[i].fname, employees[i].lname);
        printf("ID: %d\n", employees[i].id);
        printf("SSN: %d\n", employees[i].ssn);
        printf("Title: %s Engineer\n", employees[i].title);
    }

}