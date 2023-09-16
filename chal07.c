#include <stdio.h>
#include <math.h>

int main(void) {

float A, B, C;
float res;

printf("Enter the value for variable 'A':\n");
scanf("%f", &A);
printf("Enter the value for variable 'B':\n");
scanf("%f", &B);
printf("Enter the value for variable 'C':\n");
scanf("%f", &C);

printf("A: %d B: %d C: %d\n", A, B, C);

float quadPos, quadNeg;

quadPos = (-B +  sqrt((B*B) - (4 * A *C))) / (2 * A);
quadNeg = (-B -  sqrt((B*B) - (4 * A *C))) / (2 * A);

printf("The positive quad is: %f\n", quadPos);
printf("The negative quad is: %f\n", quadNeg);

}
