#include <stdio.h>
void add(long int a, long int b){
  long int c = a + b;
  printf("The value of the addition is: %d", c);
}

int main(){

  long int first;
  long int second;
  printf("Enter the first number: ");
  scanf("%d", &first, "\n");
  printf("Enter the second number: ");
  scanf("%d", &second, "\n");
  add(first, second);
}
