#include <stdio.h>
int main(){
  int numbers[][3] = {{1,2,3},{4,5,6},{7,8,9}}; //For a multi dimensional array it is necessary to declare the inner array dimensions
  int size_i = sizeof(numbers) / sizeof(numbers[0]);
  int size_j = sizeof(numbers[0]) / sizeof(numbers[0][0]);
  for(int i = 0; i < size_i; i++){
    for(int j = 0; j < size_j; j++){
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }





  return 0;
}
