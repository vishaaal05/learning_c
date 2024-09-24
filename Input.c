#include <stdio.h>

int main()
{
    int num;
    char ch;
    float f;

    printf("Enter the Integer: ");
    scanf("%d", &num);

    printf("Enter the float: ");
    scanf("%f", &f); // Corrected format specifier

    printf("Enter the character: ");
    scanf(" %c", &ch); // Added a space before %c

    
    printf("Entered integer is: %d\n", num);
    printf("Entered float is: %f\n", f); // Corrected format specifier
    printf("Entered character is: %c\n", ch);

    return 0;
}
