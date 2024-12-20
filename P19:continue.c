#include <stdio.h>
int main(){
  for(int i = 0; i <= 20; i++){
    if(i == 15){
      continue; //Skips only the given condition and continues the loop
    }
    printf("%d\n", i);
  }
}
