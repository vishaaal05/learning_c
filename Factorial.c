#include<stdio.h>

int factorial(int n){

    if (n ==0 || n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of negative number doesn't exist");
    }

    printf("Factorial of %d is %d", num, factorial(num));

 return 0;
}