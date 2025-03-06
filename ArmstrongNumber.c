#include <stdio.h>
int main()
{
    int num, originalNum, result, remainder;

    printf("Armstrong numbers from 1 to 500 is : \n");

    for (num = 1; num < 500; num++)
    {
        originalNum = num;
        result = 0;

        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;

            originalNum /= 10;
        }

        if (result == num)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}