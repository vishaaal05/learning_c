#include <stdio.h>

int main(){

    int a, b;

    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
     
    printf("Before Swap value of a=%d and b=%d\n", a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap value of a=%d and b=%d", a,b);



    return 0;
}