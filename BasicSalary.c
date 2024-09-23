#include<stdio.h>

int main(){

    int basicSlry = 0;
    char grade;
    int allow; 
    int totalSalry = 0;
    
    printf("Enter your basic salary:\n");
    scanf("%d", &basicSlry);

    int hra = (20*basicSlry)/100;

    int da = (50*basicSlry)/100;

    int pf = (11*basicSlry)/100;

    printf("Enter your Grade:\n");
    scanf(" %c", &grade );

     if(grade=='A' || grade=='a')
    {
        allow = 1700;
    }else if (grade == 'B' || grade=='b')
    {
        allow = 1500;
    }else
    {
        allow = 1300;
    }


    totalSalry = (basicSlry + hra + da + allow - pf);

    printf("Your Total Salary is :%d",totalSalry);

    return 0;
}