#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit = 'C';
    float temp = -17;

    unit = toupper(unit);

    if (unit == 'C')
    {
        temp = (temp * 9 / 5) + 32;
        printf("\n The temp in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        temp = ((temp - 32) * 5) / 9;
        printf("\n The temp in Celsius is: %.1f", temp);
    }
    else
    {
        printf("Please only Enter C or F.");
    };

    return 0;
}