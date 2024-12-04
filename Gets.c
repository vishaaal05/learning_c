#include<stdio.h>
int main() {
    char name[5];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // fgets(name, sizeof(name), stdin); // Reads max 9 chars + '\0'
    printf("Hello, %s\n", name);
    return 0;
}
