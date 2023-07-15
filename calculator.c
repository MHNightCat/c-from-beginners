#include <stdio.h>

int main()
{
    char operator = '-';
    double num1 = 2;
    double num2 = 4;
    double result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("%c is not valid", operator);
        return 1;
        break;
    }

    printf("\nresult: %lf", result);
    return 0;
}