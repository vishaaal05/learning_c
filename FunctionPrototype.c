#include <stdio.h>

void add(int x, int y);
int main()
{
    add(2,3);
    return 0;
}

void add(int x, int y){
    printf("%d", x+y);
}