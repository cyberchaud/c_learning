#include <stdio.h>
#include <string.h>
#include <math.h>

#define n 5

struct stats {
    double points;
    double games;
};

struct stats player[n];

void main() {

    int i;

    for (i = 0; i < n; i++ ) {
        printf("Enter Player %d's point total: ", i + 1);
        scanf("%d", &player[i].points);
        printf("Enter Player %d's game total: ", i + 1);
        scanf("%d", &player[i].games);
    }
    
    for (i = 0; i < n; i++ ) {
        
        double ppg = (double)(player[i].points) / (player[i].games);

        printf("Player %d's scoring average was %.2f ppg.\n", i + 1, ppg );
    }
}