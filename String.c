#include <stdio.h>
#include <string.h>  // Required for strcspn()

int main() {
    char name[30];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Takes input with newline

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s", name);

    return 0;
}
