#include <stdio.h>

typedef struct{
  char name[20];
  int price;

}food;

int main(){

  food Italian = {"Pasta", 300};
  food Indian = {"Dosa", 60};

  printf("Italian Cuisine, Name Price: %s %d\n", Italian.name, Italian.price);
  printf("Indian Cuisine, Name Price: %s %d\n", Indian.name, Indian.price);

  return 0;

}
