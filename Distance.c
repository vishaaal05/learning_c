#include <stdio.h>


struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;


    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12); 
        result.inches = (int)result.inches % 12; 
    }

    return result;
}

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    sum = addDistances(d1, d2);

    printf("\nThe total distance is: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
