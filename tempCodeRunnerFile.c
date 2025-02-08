#include<stdio.h>
int main()
{
    char sentence[100];
    printf("Enter any sentence ");
    gets(sentence);

    int count =0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if((sentence[i]>='a'&&sentence[i]<='z') || (sentence[i]>='A'&&sentence[i]<='Z')){
            count++;
        }
    }

    printf("Count of alphabets : %d", count);
     
 return 0;
}