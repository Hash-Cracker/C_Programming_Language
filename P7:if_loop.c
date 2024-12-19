#include <stdio.h>
int main(){
  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);

  if(grade == 'A'){
    printf("DAMN! You got A");
  }
  else if(grade == 'B'){
    printf("Not bad you got B");
  }
  else if(grade == 'C'){
    printf("It is okay, do better next time");
  }
  else if(grade == 'D'){
    printf("Bad, good perfomance is expected next time");
  }
  else{
    printf("Enter a valid grade");
  }
}
