#include <stdio.h>

int sum_of_digits(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sum_of_digits(num);
    printf("The sum of digits of %d is %d\n", num, sum);
    return 0;
}

int sum_of_digits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sum_of_digits(num / 10);
    }
}

