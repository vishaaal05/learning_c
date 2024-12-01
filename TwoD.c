#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the size of the of row\n");
    scanf("%d", &row);
    printf("Enter the size of the of col\n");
    scanf("%d", &col);
    int arr[row][col];

    printf("Enter the elements\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    printf("Entered elements are\n");
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++)
        {
            printf("%d\t", arr[i][j]);/* code */
        }
        printf("\n");
}
    return 0;
}