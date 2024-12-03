#include<stdio.h>
int main() {
    char name[3];
    printf("Enter your name: ");
    gets(name);
    // fgets(name, sizeof(name), stdin); // Reads max 9 chars + '\0'
    printf("Hello, %s\n", name);
    return 0;
}
