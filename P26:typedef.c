#include <stdio.h>
// Anything that is defined in the aread above all the function in a C or C++ program is called a Preprocessor derivative
typedef int arr[20]; 

int main(){
  arr a = {1,2,3,4,5,6};
  for(int i = 0; i <= sizeof(a)/sizeof(a[0]); i++){
    printf("%d\n", a[i]); //The output will print upto 6 followed by 14 zeroes because the variable "arr" is defined as an integer array of size 20
  }
}
