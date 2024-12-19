#include <stdio.h>
#include <string.h> //Add this header file to use the functions

int main(){
  char str1[] = "Hash";
  char str2[] = "Cracker";

  //To append arg1 to the end of arg2
  strncat(str1, str2, 2); //The third argument will only append the first two letters in the second word
  //To copy contents of a string to another string 
  strcpy(str1, str2);
  //To copy given cahracters in a string to the same index values of the copied contents
  strncpy(str1, str2, 2);
  //To find the length of the character
  strlen(str1);
  
  printf("%s", str1);
}
