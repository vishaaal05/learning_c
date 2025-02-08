#include <stdio.h>

int main() {
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your full name: \n");

    // Use fgets instead of scanf
    fgets(firstName, sizeof(firstName), stdin);

    // Output the text
    printf("Hello %s", firstName);

    return 0;
}
