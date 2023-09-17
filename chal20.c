#include <stdio.h>

struct myStructure {
    int myint;
    char mychar;
    float myfloat;
};


void main() {

    struct myStructure s1;

    s1.myint = 50;
    s1.mychar = 'W';
    s1.myfloat = 3.14;

    printf("This is the int: %d, this is the char %c, this if the float %.2f", s1.myint, s1.mychar, s1.myfloat);

}