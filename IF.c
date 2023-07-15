#include <stdio.h>

int main()
{   
    int age = 0;

    if (age >= 18)
    {
        printf("Your are now signed up!");
    }
    else if(age== 0){
        printf("You can't sign up! You were just born!");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet!");
    }
    else
    {
        printf("Your are too young to sign up!");
    };

    return 0;
}