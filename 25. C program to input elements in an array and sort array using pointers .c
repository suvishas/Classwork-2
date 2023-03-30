#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int size);
void sortArray(int *arr, int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
void printArray(int *arr, int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    inputArray(arr, size);

    printf("Do you want to sort the array in ascending or descending order?\n");
    printf("Enter 1 for ascending and 2 for descending: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        sortArray(arr, size, ascending);
        printf("The array in ascending order is:\n");
    } else {
        sortArray(arr, size, descending);
        printf("The array in descending order is:\n");
    }

    printArray(arr, size);

    return 0;
}

void inputArray(int *arr, int size) {
    int i;

    for (i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }
}

void sortArray(int *arr, int size, int (*compare)(int a, int b)) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if ((*compare)(*(arr + i), *(arr + j)) > 0) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int ascending(int a, int b) {
    return a - b;
}

int descending(int a, int b) {
    return b - a;
}

void printArray(int *arr, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
