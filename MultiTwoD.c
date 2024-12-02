#include <stdio.h>
int main()
{
    int r1, r2, c1, c2;
    printf("Enter the number of rows and cols of matrix1 : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and cols of matrix2 : ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible");

        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], res[r1][c2];

    printf("Enter the elements of matrix1 :");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of matrix2 :");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }
    }

    printf("Resultant matrix is\n");
    for (int i = 0; i < r1; i++)
    {
       for (int j = 0; j < c2; j++)
       {
        printf("%d ", res[i][j]);
       }
       printf("\n");
    }
    

    return 0;
}