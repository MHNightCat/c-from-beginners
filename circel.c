#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter theradius or a circle");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("circunference: %lf", circumference);
    printf("area: %lf", area);
    return 0;
}