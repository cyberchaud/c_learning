#include <stdio.h>
#include <math.h>

int main(void) {

int A, B, C;
float res;

printf("Enter the value for variable 'A':\n");
scanf("%d", &A);
printf("Enter the value for variable 'B':\n");
scanf("%d", &B);
printf("Enter the value for variable 'C':\n");
scanf("%d", &C);

printf("A: %d B: %d C: %d\n", A, B, C);

double quadPos, quadNeg;

quadPos = (-B +  sqrt(B*B - (4 * A *C))) / (2 * A);

printf("The positive quad is: %d", quadPos);

}
