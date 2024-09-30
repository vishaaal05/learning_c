#include<stdint.h>

int main(){
    int side1;
    int side2;
    int side3;

    printf("Enter the value of side1\n");
    scanf("%d", &side1);

    printf("Enter the value of side2\n");
    scanf("%d", &side2);

    printf("Enter the value of side3\n");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3  && side1 == side3)
    {
        printf("Triangle is equilateral");
    }else if (side1 == side2 || side2 == side3  || side1 == side3)
    {
       printf("Triangle is Isosceles");
    }else{
         printf("Triangle is Scalene");
    }
       
    
    
        
    return 0;
}