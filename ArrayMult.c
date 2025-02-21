#include <stdio.h>
#include <stdlib.h>

void displayMatrix(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int n, int A[n][n], int B[n][n], int result[n][n])
{
    if (n <= 0)
    {
        printf("Invalid matrix size\n");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of matrices (n x n): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size! Please enter a positive number.\n");
        return 1;
    }

    int A[n][n], B[n][n], result[n][n];

    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    multiplyMatrices(n, A, B, result);

    printf("Matrix A:\n");
    displayMatrix(n, A);

    printf("\nMatrix B:\n");
    displayMatrix(n, B);

    printf("\nMultiplication Result:\n");
    displayMatrix(n, result);

    return 0;
}
