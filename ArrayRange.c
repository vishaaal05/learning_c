//You have been given an integer value N. 
//Your task is to populate the array using the integer values in 
//the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.

#include <stdio.h>

void populateArray(int N) {
    int arr[N];
    int index = 0;

    for (int i = 1; i <= N; i += 2) {
        arr[index++] = i;
    }


    for (int i = N; i >= 1; i--) {
        if (i % 2 == 0) {
            arr[index++] = i;
        }
    }

    // Print the array
    printf("Populated Array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N > 0) {
        populateArray(N);
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}
