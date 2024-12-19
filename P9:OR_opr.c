#include <stdio.h>
#include <stdbool.h>
int main(){
  int temp;
  printf("Enter the temperature: ");
  scanf("%d", &temp);

  if(temp <= 0 || temp >=50){
    printf("The temperature is bad");
  }
  else{
    printf("The teomperature is good");
  }
}
