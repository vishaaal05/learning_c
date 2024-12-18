// Given five positive integers in an array, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values .

// Example

// arr=[1,3,5,7,9]
// The minimum sum is  1+3+5+7=16 and the maximum sum is 3+5+7+9=24 . The function prints

// 16 24

// #include <stdio.h>

// int main() {
//     int arr[5];
//     printf("Enter 5 numbers: \n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }


//     for (int i = 0; i < 4; i++) {
//         for (int j = i + 1; j < 5; j++) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     int min = 0, max = 0;
//     for (int i = 0; i < 4; i++) {
//         min += arr[i];         
//         max += arr[i + 1];      
//     }

//     printf("%d %d\n", min, max);
//     return 0;
// }


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code 
    int arr[5];
    printf("Enter the 5 elements\n");
    for(int i=0; i<5; i++){
         scanf("%d", &arr[i]);
    }
   
   for(int i=0 ; i<4; i++){
       for(int j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
       }
      
   }
   
   printf("Sorted Array is\n");
   for(int i=0; i<5; i++){
       printf("%d ", arr[i]);
   }
    
    int min=0, max=0;
    for(int i=0; i<4; i++){
        min+= arr[i];
        max+= arr[i+1];
    }
    
    printf("\nMinimum and Maximum sum is\n");
    printf("%d %d", min, max);

    return 0;
}