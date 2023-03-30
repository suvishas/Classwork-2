#include <stdio.h>

#define PI 3.14159265359
float calcDiameter(float radius) {
    return 2 * radius;
}
float calcCircumference(float radius) {
    return 2 * PI * radius;
}
float calcArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    diameter = calcDiameter(radius);
    circumference = calcCircumference(radius);
    area = calcArea(radius);
    printf("Diameter of the circle = %f units\n", diameter);
    printf("Circumference of the circle = %f units\n", circumference);
    printf("Area of the circle = %f square units\n", area);

    return 0;
}

