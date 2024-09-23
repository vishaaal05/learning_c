// C program to add two numbers
#include <stdio.h>

int main() {
    int num1, num2, sum = 0;
     
      // Read two numbers from the user
    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Calculate the addition of num1 and num2
    // using '+' operator
    sum = num1 + num2;

    printf("The addition of the num1 and num2 is %d", sum);

    return 0;
}
