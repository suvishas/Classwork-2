#include <stdio.h>

double power(double num, int pow);

int main() {
    double num, result;
    int pow;

    printf("Enter the number: ");
    scanf("%lf", &num);

    printf("Enter the power: ");
    scanf("%d", &pow);

    result = power(num, pow);
    printf("%lf ^ %d = %lf\n", num, pow, result);

    return 0;
}

double power(double num, int pow) {
    if (pow == 0) {
        return 1;
    } else if (pow % 2 == 0) {
        double temp = power(num, pow / 2);
        return temp * temp;
    } else {
        double temp = power(num, (pow - 1) / 2);
        return num * temp * temp;
    }
}

