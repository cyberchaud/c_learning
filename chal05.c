#include <stdio.h>

#define HOUR 3600
#define MINUTE 60

int main(void) {

int secs, hours, minutes, seconds;

printf("Enter the amount of seconds:\n");
scanf("%d", &secs);

hours = secs / HOUR;
minutes = (secs - (hours * HOUR)) / MINUTE;
seconds = secs - (hours * HOUR) - (minutes * MINUTE);


printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", secs, hours, minutes, seconds);
}