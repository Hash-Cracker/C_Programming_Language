#include <stdio.h>
int main(){
  //It executes a block of code first before checking the condition
  int num = 0;
  int sum = 0;

  do{
    printf("Enter a number above 0: ");
    scanf("%d", &num);
    if(num > 0){
      sum += num;
    }
  }while(num > 0);
  printf("Sum: %d", sum);
  return 0;
}
