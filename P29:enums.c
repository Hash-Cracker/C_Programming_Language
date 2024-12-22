#include <stdio.h>

enum month{Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};
// This will assign the following numbers to the string
// So whenever the word Sep is mentioned the compiler will take it as 9

int main(){

  enum month current;
  printf("Enter the number of the month: ");
  scanf("%d", &current);

  if(current == Dec || current == Jan){
    printf("Yay! It is Winter Holiday time\n");
  }
  else if(current == Apr || current == May){
    printf("Yay! It is summer Holiday time\n");
  }
  else{
    printf("No, Holiday season now :(\n");
  }
  return 0;
}
