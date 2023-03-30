#include <stdio.h>

#define MAX_SIZE 100

int *searchArray(int *arr, int size, int key);

int main() {
    int arr[MAX_SIZE], size, i, key, *result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = searchArray(arr, size, key);

    if (result != NULL) {
        printf("%d found at position %d.\n", key, result - arr + 1);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}

int *searchArray(int *arr, int size, int key) {
    int i;

    for (i = 0; i < size; i++) {
        if (*arr == key) {
            return arr;
        }
        arr++;
    }

    return NULL;
}
