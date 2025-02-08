#include <stdio.h>
#include <string.h>

union Data {
   char name[20];
   int age;
};

int main() {

    union Data d1;
    d1.age=24;
    printf("%d\n", d1.age);

    printf("%d", sizeof(d1));


    

    return 0;
}
