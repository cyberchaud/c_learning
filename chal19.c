#include <stdio.h>
#include <stdlib.h>

int main(void) {

char *ptr;

ptr = malloc(10 * sizeof(char));

if (ptr == NULL) {
    printf("Memory could not be allocated.");
    return 1;
} else {
    printf("Memory was allocated.");
    free(ptr);
    return 0;
}

}