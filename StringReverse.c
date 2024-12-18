#include <stdio.h>
#include <string.h>
int main() {
    char name[20];
    
    printf("Enter Any String\n");
    fgets(name, sizeof(name), stdin);
    
    printf("Entered string is\n");
    for(int i=0; i<strlen(name); i++){
        printf("%c", name[i]);
    }
    
    printf("Reverse of the string is\n");
    for(int i=strlen(name); i>=0; i--){
        printf("%c", name[i]);
    }
}