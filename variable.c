#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;
    x = 123;
    int y = 321;

    int age = 21;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Bro";
    double adouble = 3.141543243241234;
    bool abool = false;

    printf("Hello %s\n", name);
    printf("Your are %d years old\n", age);
    printf("Your averge grade is %c\n", grade);
    printf("Your gpa is %.2f\n", gpa);
    printf("This is your dobule %0.15f\n", adouble);
    printf("This is your bool %d\n", abool);

    return 0;
}
