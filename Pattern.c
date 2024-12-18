// Write a program to print the following pattern:
//      *
//     ***
//    *****
//   *******

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of n: ");
    scanf("%d", &n);
    //  for(int i=0;i<n;i++)
    //  {
    //      for(int j=0;j<n+i;j++)
    //      {
    //        if (j>=n-i-1)
    //        {
    //         printf("*");
    //        }else{
    //         printf(" ");
    //        }

    //      }
    //      printf("\n");
    //  }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 && j == (n - 1) / 2 || i == 1 && j >= (n-1)/2 -1 && j <= (n-1)/2+1 || i == 2 && j >= 1 && j <= (n-1)-1 || i == 3)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int a = 1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i == 0 && j == 0 || i == 1 && j <= 1 || i==2 && j <=2 || i ==3 && j<=3 ||  i==4 && j<=4)
    //             {
    //                 printf("%d", a++);

    //             }else{
    //                 printf(" ");
    //             }
    //         }
    //         a=1;

    //         printf("\n");
    //     }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == (n - 1) / 2 || i == 1 && j == 1 && j == (n - 1) - 1 || i == 3 && j == 0 && j == (n - 1) || i == 4 && j == 1 && j == (n - 1) / 2 + 1 || i == 4 && j==(n-1)/2)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}