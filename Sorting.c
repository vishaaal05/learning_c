#include<stdio.h>
void b_sort(int a[],int size){

    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

int main()
{

    int a[8]={1,2,6,7,3,4,9,10};

    int size = 8;

    b_sort(a, size);

    printf("Sorted array %d\n ", a)

 return 0;
}