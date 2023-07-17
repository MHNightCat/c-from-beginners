#include <stdio.h>

void birthday(char name[], int age)
{
    printf("Happy birthday dear %s", name);
    printf("\nYou are %d years old!", age);
}

double square(double x){
    return x * x;
}

int main()
{
    /*char name[] = "Bro";
    int age = 20;
    birthday(name, age);*/
    double x = square(3.14);
    printf("%lf", x);

    return 0;
}