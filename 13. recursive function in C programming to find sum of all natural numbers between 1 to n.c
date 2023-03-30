#include <stdio.h>

int findSum(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = findSum(n);
    printf("The sum of all natural numbers from 1 to %d is %d\n", n, sum);

    return 0;
}

int findSum(int n) {
    if (n == 1) {
        return 1;
    }

    return n + findSum(n - 1);
}
