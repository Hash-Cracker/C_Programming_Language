#include <stdio.h>

int main() {
  /* augmented assignment operators
   They are basically a shortcut for calculations
   for example: instead of x = x + 1 we can use x += 1
   x++

   Similarly we can do this to every assignment operators
   x -= 1
   x %= 2
   x /= 5
   x *= 3
   and much more
  */
  int x = 20;
  int y;
  int z;
  int a;
  int b;
  y = 15;
  z = 20;
  a = 4;
  b = 4;
  x++;
  y -= 3;
  z /= 5;
  a *= 3;
  b %= 2;
  printf("The value is: %d\n", x);
  printf("The value is: %d\n", y); 
  printf("The value is: %d\n", z);
  printf("The value is: %d\n", a);
  printf("The value is: %d\n", b);
 
  return 0;
  
}
