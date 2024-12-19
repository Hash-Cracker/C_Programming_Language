#include <stdio.h>

void number(a, b);

int main(){
  int a = 45;
  int b = 36;

  number(a);
  return 0;

}
void number(int a, int b){
  
  printf("\nThe first number is: %d\n", a);
  printf("\nThe second number is: %d\n", b);

}
