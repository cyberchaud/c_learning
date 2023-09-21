#include <stdio.h>

struct test {
    int integer;
};

void main() {

    struct test *ptr;
    struct test test;

    ptr = &test;

    test.integer = 5;
    printf("This is the value of my struct: %d\n", test.integer);

    (*ptr).integer = 6;
    printf("This is the value of my ptr: %d\n", test.integer);
  
    ptr->integer = 7;
    printf("This is the value of my indirect assignment: %d\n", test.integer);

}