#include <stdio.h>
#include <string.h>
int main(){
  char name[10];

  printf("Enter you name: ");
  fgets(name, 10, stdin);
  name[strlen(name) - 1] = '\0';
  while(strlen(name) == 0 ){
      printf("This will contibue until you enter your name\n");
      printf("Enter you name: ");
      fgets(name, 10, stdin);
      name[strlen(name) - 1] = '\0';
  }
}
