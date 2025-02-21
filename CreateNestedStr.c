#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
    int pincode;
};

struct Student
{
    char name[50];
    int age;
    char email[50];
    struct Address address;
};

int main()
{
    struct Student s1;
    printf("Enter Student Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter Email: ");
    scanf("%s", s1.email);
    printf("Enter City: ");
    scanf("%s", s1.address.city);
    printf("Enter State: ");
    scanf("%s", s1.address.state);
    printf("Enter Pincode: ");
    scanf("%d", &s1.address.pincode);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Email: %s\n", s1.email);
    printf("Address: %s, %s - %d\n", s1.address.city, s1.address.state, s1.address.pincode);

    return 0;
}
