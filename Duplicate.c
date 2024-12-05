#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    for(int i=0; i<n; i++){
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("Duplicate element found at %d index", i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("No duplicate element found");
    }


 return 0;
}