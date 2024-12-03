#include<stdio.h>
int main()
{   
    int a = 5;
    int *p = &a;
    if (p == NULL)
    {
        printf("pointer is null");
    }else 
    {
        printf("Null nahi hai");
    }
    
    
// int a = 5;
// int *p = &a;
// printf("Value of a is %d\n", a);
// printf("Address of the a variable is %p\n", &a);
// printf("Address of the a variable is %d\n", &a);
// printf("Address of the a variable is %d\n", *p);
// printf("Address of the a variable is %p\n", *p);
// printf("Address of the a variable is %p\n", p);
// printf("Address of the a variable is %d\n", p);
// printf("Value of a is before changing %d\n", a);
// a = 10;
// printf("Value of a is after changing %d", a);

 return 0;
}