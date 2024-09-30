#include<stdio.h>

int main (){
    char alphabet;
    printf("Enter the alphabet\n ");

    scanf("%c", &alphabet);

    if (alphabet == 'A' || alphabet == 'a' || alphabet =='E' || alphabet == 'e' || alphabet =='I' || alphabet == 'i' || alphabet == 'O' || alphabet=='o' || alphabet == 'U' || alphabet == 'u')
    {
       printf("It is a vowel");
    }else{
        printf("It is a consonant");
    }
    
    return 0;
    
    
    
}