#include <stdio.h>

void printNaturalNumbers(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The natural numbers from 1 to %d are:\n", n);
    printNaturalNumbers(n);

    return 0;
}

void printNaturalNumbers(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return;
    }

    printNaturalNumbers(n - 1);
    printf("%d\n", n);
}
