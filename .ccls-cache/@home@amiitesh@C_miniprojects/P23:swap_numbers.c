#include <stdio.h>
int main(){
  int x = 20;
  int y = 10;
  int temp;
  
  temp = x;
  x = y;
  y = temp;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
}
