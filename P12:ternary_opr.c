#include <stdio.h>

int maxTwo(int a, int b){
  return ( a > b ) ? a : b;

}

int main(){
  // Instead of using loops to return a condition we can use this ternary operator "?" which help us complete the job in a single line of code
  // For a program of returning the largest integer
  int a;
  int b;
  a = 10;
  b = 12;
  int large = maxTwo(a, b);
  printf("%d", large);
  return 0;
}
