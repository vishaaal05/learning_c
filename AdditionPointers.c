#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    int *ptr1 = &a, *ptr2 = &b;
    // ptr1 = &a;
    // ptr2 = &b;

    int result = *ptr1 + *ptr2;

    printf("Sum of %d and %d is : %d \n", a,b, result);
  

 return 0;
}
