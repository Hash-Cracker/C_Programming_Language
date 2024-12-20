#include <stdio.h>
int main(){
  // Arrays stores many elements of the same datatype in the same variable
  int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = sizeof(numbers) / sizeof(numbers[0]);// sizeof returns the size of the array in bytes and divided by any of the element gives the total elements in the array
  //To access them individually
  printf("Individual access: %d\n", numbers[5]);

  // To access all and print it in the consequent line
  printf("Accessing all elements: \n");
  for(int i = 0; i < size; i++){
    printf("%d\n", numbers[i]);
  }
}
