#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter first number:\n");
    scanf("%d", &a);

    printf("Enter second number:\n");
    scanf("%d", &b);

    printf("Enter third number:\n");
    scanf("%d", &c);


    if(a > b && a > c ){
        printf("Largest Value is: %d \n ", a);
    }else if (b > a && b > c){
        printf("Largest Value is: %d \n ", b);
    }else if (c > a && c > b){
        printf("Largest Value is: %d \n ", c);
    }
    
    return 0;
}