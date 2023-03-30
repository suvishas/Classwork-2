#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int n, i, num;
    int maximum = -2147483648; 
    int minimum = 2147483647; 
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        maximum = max(maximum, num); 
        minimum = min(minimum, num); 
    }
    printf("Maximum number is: %d\n", maximum);
    printf("Minimum number is: %d\n", minimum);
    return 0;
}
