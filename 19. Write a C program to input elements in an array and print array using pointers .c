#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    ptr = arr;
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

