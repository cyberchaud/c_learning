#include <stdio.h>

#define ROW 4
#define COL 5

int main() {

int points[ROW][COL];
float player_points[COL];
int total_points = 0;
float highest_point = 0;
int highest_player = 0;

int i, j;

for (i = 0; i < ROW; i++ ) {
    printf("Game #%d\n", i+1);
    for (j = 0; j < COL; j++ ) {
        printf("Enter score for Player #%d: ", j+1);
        scanf("%d", &points[i][j]);
    }
}

    for (j = 0; j < COL; j++) {
        total_points = 0;
        for (i = 0; i < ROW; i++) {
            total_points += points[i][j];
        }
        player_points[j] = total_points / ROW;

        if (player_points[j] > highest_point) {
            highest_player = j;
            highest_point = player_points[j];
        }
    }

    printf("Player %d had the highest average with %.2f average points per game.\n", highest_player + 1, highest_point);

}