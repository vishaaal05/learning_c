#include <stdio.h>

void change(int *a){
    *a = 20;
}

int main()
{
    int a = 10;
    printf("value of a before function call is %d\n", a);
    change(&a);
    printf("value of a after function call is %d\n", a);
    return 0;
}