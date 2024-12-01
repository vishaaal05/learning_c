#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the %d element of array\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Entered elements are\n");
    int n=0;
    while(n < size){
        printf("%d ", arr[n]);
        n++;
    }
   
    return 0;
}