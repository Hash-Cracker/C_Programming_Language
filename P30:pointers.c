#include <stdio.h>
int main(){
  // pointer is a referencing variable that stores the memory address of another variable
  // pointers are used to increase the speed of the program
  // %p prints the memory address of the referenced variable
  int a = 18;
  int *pa = &a; // referencing: pa stores the value of a
  
  printf("Value of a: %d\n", a); // Directly accessing the value of a
  printf("Address of a: %p\n", &a); // &a is referencing a to get the memory address of a
  printf("Value of pa: %p\n", pa); // Value of pa which contains the reference of a

  printf("Dereferencing pa: %d\n", *pa); // Dereferencing pa to get the value stored at the memory address of a

  *pa = 10;  // Changes the value of 'a' through the pointer which changes the value of 'a' at the memory address level
  printf("Updated value of a: %d\n", a); // It prints the value: 10
}
