#include <stdio.h>

void printEvenNumbers(int n);
void printOddNumbers(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The even numbers from 1 to %d are:\n", n);
    printEvenNumbers(n);

    printf("The odd numbers from 1 to %d are:\n", n);
    printOddNumbers(n);

    return 0;
}

void printEvenNumbers(int n) {
    if (n < 1) {
        return;
    }

    if (n % 2 == 0) {
        printEvenNumbers(n - 2);
        printf("%d\n", n);
    } else {
        printEvenNumbers(n - 1);
    }
}

void printOddNumbers(int n) {
    if (n < 1) {
        return;
    }

    if (n % 2 == 1) {
        printOddNumbers(n - 2);
        printf("%d\n", n);
    } else {
        printOddNumbers(n - 1);
    }
}
