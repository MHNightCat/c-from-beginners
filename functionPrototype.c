#include <stdio.h>

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}

int main(){
    char name[] = "Bro";
    int age = 18;
    hello(name, age);
    return 0;
}

