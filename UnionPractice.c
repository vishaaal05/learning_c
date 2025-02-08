#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    // Storing an integer
    data.i = 10;
    printf("Data as integer: %d\n", data.i);
    printf("%p\n", &data.i);
    // Storing a float (overwrites the integer)
    data.f = 220.5;
    printf("Data as float: %.2f\n", data.f);
    printf("%p\n", &data.f);
    
    // Storing a string (overwrites the float)
    strcpy(data.str, "Hello, World!");
    printf("Data as string: %s\n", data.str);
    printf("%p\n", &data.str);
    
    return 0;
}
