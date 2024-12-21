#include <stdio.h>

void array_sort(int array[], int length){
  for(int i = 0; i < length - 1; i++){

    for(int j = 0; j < length - 1; j++){
      
      if(array[j] > array[j+1]){
        
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;      
      }
    }
  }
}

// Print the array
void array_print(int array[], int length){
  for(int i = 0; i < length; i++){
    printf("%d ", array[i]);
  }
}

int main(){
  int array[] = {23, 65, 12, 90, 43};
  int length = sizeof(array)/sizeof(array[0]);

  array_sort(array, length);
  array_print(array, length);

  return 0;


}
