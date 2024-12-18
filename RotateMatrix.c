// Given a square matrix, the task is to turn it by 180 degrees.
// Note that when we rotate a matrix by 180 degree, clockwise and anticlockwise both give same results.

// Input: 1  2  3
//        4  5  6
//        7  8  9
// Output: 9 8 7
//         6 5 4
//         3 2 1

#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("Original matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // printf("Transpose of matrix: \n");
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < row; i++)
    {
        int li = 0;
        int ri = col - 1;

        while (li < ri)
        {
            int temp = arr[i][li];
            arr[i][li] = arr[i][ri];
            arr[i][ri] = temp;

            li++;
            ri--;
        }
    }
// printf("----------------------------------- \n");
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

  for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

 for (int i = 0; i < row; i++)
    {
        int li = 0;
        int ri = col - 1;

        while (li < ri)
        {
            int temp = arr[i][li];
            arr[i][li] = arr[i][ri];
            arr[i][ri] = temp;

            li++;
            ri--;
        }
    }

  printf("Rotated matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}