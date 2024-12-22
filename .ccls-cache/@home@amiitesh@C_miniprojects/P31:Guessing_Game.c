#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int main(){
  srand(time(NULL));

  int comp_number = rand() % 10 + 1;
  // rand() returns a random integer in the range 1 to RAND_MAX (usually 1 to 32767, the range of int datatype)
  // rand() % 10 is the range from 0 to 9 and rand() % 10 + 1 is the range 1 to 10
  int guess;
  int attempt = 0;

  printf("Guessing Game\n");
  printf("Chose number from 1 to 10\n");

  do {
    printf("Enter the number in the range of 1 to 10: ");
    scanf("%d", &guess);
    attempt++;

    if(guess > comp_number){
      printf("High, Try again\n");
    }
    else if(guess < comp_number){
      printf("Low, Try again\n");

    }
    else{
      printf("You have guessed it right");
    }
  }while(guess != comp_number);
  
  return 0;

}
