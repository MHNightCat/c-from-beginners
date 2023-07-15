#include <stdio.h>

int main()
{
    char grade = 'C';

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    default:
        printf("Please enter only valid grade");
        break;
    }

    return 0;
}