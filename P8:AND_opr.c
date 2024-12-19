#include <stdio.h>
#include <stdbool.h>
int main(){
  int temp;
  printf("Enter the temperature in your area: ");
  scanf("%d", &temp);

  if(temp >= 0 && temp <= 20){printf("The weather is bad");}
  else if(temp >= 20 && temp <= 40){printf("The weather is manageable");}
  else if(temp >= 40 && temp <= 50){printf("The weather is lethal");}
  else{printf("Print a valid weather information");}
}
