#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = " World";
    char str3[20];

    // String Concatenation
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    // String Copy
    strcpy(str3, str1);
    printf("Copied: %s\n", str3);

    // String Length
    printf("Length: %lu\n", strlen(str3));

    // String Compare
    int result = strcmp("banana", "apple");
    printf("Compare: %d\n", result);

    return 0;
}
