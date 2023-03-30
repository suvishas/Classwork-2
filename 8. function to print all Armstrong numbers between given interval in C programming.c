#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
void printArmstrong(int start, int end);

int main() {
    int start, end;

    printf("Enter start and end of interval: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    printArmstrong(start, end);

    return 0;
}

int isArmstrong(int num) {
    int digit, sum = 0, temp = num, n = 0;

    while (temp > 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return (sum == num);
}

void printArmstrong(int start, int end) {
    int i;

    for (i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

