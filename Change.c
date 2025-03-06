#include <stdio.h>

void change(int a) {
    a = 20; // Changes only local variable `a`
    printf("Value of a inside function: %d\n", a);
}

int main() {
    int a = 10;
    printf("Value of a before function call: %d\n", a);
    
    change(a); // Passing by value (original `a` remains unchanged)
    
    printf("Value of a after function call: %d\n", a);

    return 0;
}
