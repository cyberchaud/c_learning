#include <stdio.h>
#include <string.h>

int main(void) {

int i = 0, score, scores = 0;
float avgscores;
char answer[] = "y";

while (strcmp(answer, "y") == 0) {
    
    printf("Enter a test score:");
    scanf("%d", &score);
printf("%d", score);
    scores += score;
    i++;
    printf("Would you like to continue? Y/N");
    scanf("%s", &answer);

}

printf("scores: %d i: %d\n", scores, i);
avgscores = scores / i;
printf("The average score is: %.2f", avgscores);

}