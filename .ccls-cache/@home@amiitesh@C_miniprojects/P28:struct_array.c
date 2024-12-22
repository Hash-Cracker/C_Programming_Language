#include <stdio.h>
#include <string.h>

struct food{
  char name[20];
  int price;
};

int main(){

  struct food Italian = {"Pasta", 300};
  struct food Indian = {"Dosa", 60};
  struct food Mexican = {"Taco", 250};
  struct food American = {"Burger", 250};

  struct food menu[] = {Italian, Indian, Mexican, American};



  for(int i = 0; i < sizeof(menu)/sizeof(menu[0]); i++){
    
    printf("%-5s\t", menu[i].name);
    printf("%d\n", menu[i].price);

  }

  return 0;
}
