#include<stdio.h>
int main()
{
//  char name[] = "Vishal Kumar gupta";
char name[50];
printf("Enter the name:\n");
fgets(name, sizeof(name), stdin);
printf("Name is %s", name);

for (int i = 0; name[i]!='\0'; i++)
{
    printf("%c\n", name[i]);
}

 return 0;
}