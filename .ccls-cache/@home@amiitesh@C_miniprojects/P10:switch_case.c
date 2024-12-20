//To simplify if loop we are going to use switch case 
#include <bits/pthreadtypes.h>
#include <stdio.h>
int main(){
  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A':
      printf("You got A grade");
      break;
    case 'B':
      printf("Better perfomance next time, not bad");
      break;
    case 'C':
      printf("Bad, do better next time");
      break;
    case 'D':
      printf("Hmm, you need to concentrate more");
      break;
    default:
      printf("Enter a valid grade");
  }
}
