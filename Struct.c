#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myName[10];
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  strcpy(s1.myName, "Vishal"); 

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My name: %s\n", s1.myName);

  return 0;
}