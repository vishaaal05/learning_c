// Write program to reverse a string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Vishal";
    int i, j;
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reverse of string is: %s", str);

    return 0;
}