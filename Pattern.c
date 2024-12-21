#include <stdio.h>
int main()
{
    int n = 5;
    int num = 1;

    //FIRST
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
         printf(" ");
        }

        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("%d",num);
        }

        for (int j = 0; j < (n - i - 1); j++)
        {
            printf(" ");
        }
        num++;
        printf("\n");
    }

    printf("======================================\n");
    //SECOND
    for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<=i;  j++)
    {
        printf("%d ", num++);
    }
    printf("\n");
    }

     printf("======================================\n");
    //SECOND
    for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<=i;  j++)
    {
        printf("*");
    }
    printf("\n");
    }

         printf("======================================\n");
    //SECOND
    for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n;  j++)
    {
        printf("*");
    }
    printf("\n");
    }

    printf("======================================\n");
    //THIRD
     for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n;  j++)
    {
        printf("*");
    }
    printf("\n");
    }


    printf("======================================\n");
    // FOUR
     for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<=i;  j++)
    {
        printf("%d ", num);
    }
    num++;
    printf("\n");
    }

    printf("======================================\n");
    
    //FIVE
     for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n;  j++)
    {
        if (j==0||i==(n-1))
        {
            printf("*");
        }else{
            printf(" ");
        }
        
    }
    printf("\n");
    }

    printf("======================================\n");
      //six
     for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n;  j++)
    {
        if (j==0||i==0 || i==(n-1)|| j==(n-1))
        {
            printf("*");
        }else{
            printf(" ");
        }
        
    }
    printf("\n");
    }

    printf("======================================\n");

      for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n-2;  j++)
    {
        if (j==0||i==0 || i==(n-1)|| j==2)
        {
            printf("*");
        }else{
            printf(" ");
        }
        
    }
    printf("\n");
    }


    printf("======================================\n");

    for (int i = 0; i < n;  i++)
    {
    for (int j= 0; j<n;  j++)
    {
        if (i==0 || i==(n-1) || j==i)
        {
            printf("*");
        }else{
            printf(" ");
        }
        
    }
    printf("\n");
    }

    printf("======================================\n"); 



    return 0;
}