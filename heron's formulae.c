// write a c program to find the area of a triangle using heron's formulae

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle is: %.2f square units\n", area);
    return 0;
}
