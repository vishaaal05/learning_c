#include <stdio.h>
#include <string.h> // Required for strcspn()

int main()
{
    int num = 45;
    int* ptr = &num;
    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &num);
    return 0;
}
