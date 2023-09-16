#include <stdio.h>

int main(void) {

#define PI 3.14

float radius = 3.1416;

printf("What is the radius of your circle:\n");
scanf("%f", &radius);
printf("The area of your circle is: %f", PI*(radius*2));

}