#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputArray(int *arr, int rows, int cols);
void printArray(int *arr, int rows, int cols);

int main() {
    int arr[ROWS][COLS];

    printf("Enter the elements of the array:\n");
    inputArray(&arr[0][0], ROWS, COLS);

    printf("The elements of the array are:\n");
    printArray(&arr[0][0], ROWS, COLS);

    return 0;
}

void inputArray(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", arr + i * cols + j);
        }
    }
}

void printArray(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}
