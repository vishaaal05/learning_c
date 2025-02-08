#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr = (int *)malloc(5*sizeof(int));
 printf("Enter 5 integers\n");
//  for(int i=0;i<5;i++)
//  {
//      scanf("%d",&ptr[i]);
//  }
printf("The entered integers are\n");
 for(int i=0;i<5;i++)
 {
     printf("%d\n",ptr[i]);
 }

 return 0;
}