#include<stdio.h>

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", num);

    if (num%2==0)
    {
        printf("You entered a even number");
    }else
    {
        printf("The number entered by you is not a even number");
    }
    
    
}