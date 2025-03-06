#include <stdio.h>
int main()
{
    int num1, num2, gcd;
    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of num1 %d and num2 %d  is gcd %d", num1, num2, gcd);
    return 0;
}