#include<stdio.h>
#include<conio.h>

void main(){
    int num, temp, rev=0;
    printf("Enter number\n");
    scanf("%d", &num);

    temp = num % 10;
    num = num /10;
    rev = (rev*10)+temp;

   
    printf("Reverse is %d",rev );


}