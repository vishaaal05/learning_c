#include <stdio.h>

struct myStructure
{
    int age;
    int phoneNumber;
    char favChar;
};

int main()
{
    struct myStructure s1;

    s1.age = 34;
    s1.phoneNumber = 119;
    s1.favChar = 'V';

    printf("Age is %d \n phone number is %d \n and fav character is %c \n", s1.age , s1.phoneNumber, s1.favChar );

    printf("%p\n", &s1.age);
    printf("%p\n", &s1.phoneNumber);
    printf("%p\n", &s1.favChar);


    return 0;
}