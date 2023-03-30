#include <stdio.h>

int reverse(int num);

int main() {
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("The reverse of %d is %d\n", num, rev);

    return 0;
}

int reverse(int num) {
    static int rev_num = 0;

    if (num != 0) {
        int remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        reverse(num / 10);
    }

    return rev_num;
}
