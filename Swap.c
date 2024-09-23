#include <stdio.h>

int main(){
    int a, b, temp;
    a = 2;
    b = 3;

    temp = a;       // temp = 2
    a = b;          // a = 3
    b = temp;       // b = 2

    printf("The value of a is : %d\n\n", a);
    printf("The value of b is : %d", b);
    return 0;
}