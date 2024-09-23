#include <stdio.h>

int main()
{
    int b;
    int a ; 
    int sum1 = 0, sum2 = 0, difference;
    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    for (int i = 1; i <=b; i++)
    {
        if (i % a == 0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }

    printf("Value of sum1: %d \n", sum1);
    printf("Value of sum2: %d \n", sum2);

    difference = sum2 - sum1;

    printf("The Difference of the sum is: %d \n", difference);

    return 0;
}