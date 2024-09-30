#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          
        reversed = reversed * 10 + remainder; 
        num /= 10;                    
    }


    printf("Reversed number: %d\n", reversed);

    return 0;
}