#include <stdio.h>

int main(void) {
    int arr[10];

    int elem = sizeof(arr[10]) / sizeof(arr[0]);

    printf("The array has %d elements.\n", elem);

}