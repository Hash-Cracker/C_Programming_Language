#include <stdio.h>
#include <string.h>

struct food{
  char name[20];
  int price;
};

int main(){
  //struct - Collection of variables
  //Similar to classes in the concept of OOPS
  //Different datatypes unlike in a array

  struct food Italian;
  struct food Indian;

  strcpy(Italian.name, "Pasta");
  Italian.price = 250;

  strcpy(Indian.name, "Dosa");
  Indian.price = 60;

  printf("The Italian Cuisine dish: %s\n", Italian.name);
  printf("The price is: %d\n", Italian.price);

  printf("The Indian Cuisine dish: %s\n", Indian.name);
  printf("The price is: %d\n", Indian.price);


}
