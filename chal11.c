#include <stdio.h>

int main(void) {

int scores[10], i = 0, score, sum;
double avgscores;
char answer[0];

while (sizeof(scores) / sizeof(scores[0]) < 9) {
    
    printf("Enter a test score:");
    scanf("%d", &score);
    sum = sum + score;
    avgscores = sum / (sizeof(scores) / sizeof(scores[0]));
    printf("Would you like to continue? Y/N");
    scanf("%s", &answer);

    if (answer != "Y") {
        break;
    } else {
        //i++;
    }

}

printf("The average score is: %f", avgscores);

}