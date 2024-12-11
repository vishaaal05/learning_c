#include <stdio.h>
#include<string.h>
int main()
{
    char password[10];

    printf("Enter the password\n");
    fgets(password, sizeof(password), stdin);

    if (strlen(password) < 4 ||( password[0]>='0' && password[0]<='9')) 
    {
        printf("Password is not valid\n");
        return 0;
    }
    
    int digit = 0, capitalLettet = 0, spaceOrOblique = 0;
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            digit = 1;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            capitalLettet = 1;
        }
        else if (password[i] == ' ' || password[i] == '_')
        {
            spaceOrOblique = 1;
        }

    }
    
     if (digit == 1 && capitalLettet == 1 && spaceOrOblique == 0)
        {
            printf("Password is valid\n");
        }else{
            printf("Password is not valid\n");
        }
}