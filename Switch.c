#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int a, b, c;
    printf("Choose any number\n");
    printf("1. Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");

    scanf("%d", &num);
    switch (num)
    {
    case 1:

        printf("Enter first number\n");
        scanf("%d", &a);
        printf("Enter second number\n");
        scanf("%d", &b);
        c = a + b;
        printf("Sum of two number is %d", c);
        break;

    case 2:

        printf("Enter first numbers\n");
        scanf("%d", &a);
        printf("Enter second numbers\n");
        scanf("%d", &b);
        c = a - b;
        printf("Substraction of two numbers is %d", c);
        break;

    case 3:

        printf("Enter first number\n");
        scanf("%d", &a);
        printf("Enter second number\n");
        scanf("%d", &b);
        c = a * b;
        printf("Substraction of two numbers is %d", c);
        break;

    case 4:

        printf("Enter first number\n");
        scanf("%d", &a);
        printf("Enter second number\n");
        scanf("%d", &b);
        c = a / b;
        printf("Substraction of two numbers is %d", c);
        break;

    case 5:
        exit(0);
        break;

    default:
        printf("You entered a wrong number");
        break;
    }

    return 0;
}