#include <stdio.h>

#define HOUR 3600
#define MINUTE 600

int main(void) {

int secs = 0;

int hours, minutes, seconds = 0;

printf("Enter the amonut of seconds:\n");
scanf("%d", &seconds);

hours = secs / HOUR;
minutes = (secs - (hours * HOUR)) / MINUTE;
seconds = secs - (hours * HOUR) - (minutes * MINUTE);

printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", &secs, &hours, &minutes, &seconds);
}