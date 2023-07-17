#include <stdio.h>

int main() {
    char x = 'X';
    char y = 'Y';
    char z;

    z = y;

    y = x;

    x = z;

    printf("%c\n", x);
    printf("%c\n", y);



    return 0;
}