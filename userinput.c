#include <stdio.h>

int main() {

    int age;
    char name[25];
    fgetas(name, 25, stdin);
    printf("\nHow old are you");
    scanf("%d", &age);
    printf("Your are %d years old", age);
    return 0;
}