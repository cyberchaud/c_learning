#include <stdio.h>
#include <time.h>

int main() {

    int heads = 0, tails = 0, total;
    int i = 0;
    srand(time(NULL));
    
    printf("How many coin flips would you like to simulate?\n");
    scanf("%d", &total);

    while (total > i) {

    int r = rand() % 2;

    if (r == 0) {
        heads ++;
    } else { tails ++; }
    i++;
    }

    printf("After flipping the coin %d times, the results were:\n", total);
    printf("%d heads\n", heads);
    printf("%d tails\n", tails);

}