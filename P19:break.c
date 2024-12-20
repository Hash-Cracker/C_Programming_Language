#include <stdio.h>
int main(){
  for(int i = 0; i <= 20; i++){
    if(i == 15){
      break; //Breaks the loop when the condition is sstisfied
    }
    printf("%d\n", i);
  }
}
