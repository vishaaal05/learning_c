#include<stdio.h>
#include<conio.h>

void main(){
    int num, temp, rev=0;
    printf("Enter number\n");
    scanf("%d", &num);

    while (num!=0)
    {
    temp = num % 10;
    rev = (rev*10)+temp;
    num = num /10;
    }
   
    printf("Reverse is %d",rev );


}