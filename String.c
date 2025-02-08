#include <stdio.h>
#include <string.h> // Required for strcspn()

int main()
{
    int arr[] = {1,2,3,4,5};
    int* ptr1 = arr;
    int* ptr2 = &arr;
    printf("Address : %p\n", ptr1);
    printf("Address : %p\n", ptr2);
    printf("Address : %p", &arr[0]);

    
    return 0;
}
