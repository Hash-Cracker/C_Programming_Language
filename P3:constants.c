#include <stdio.h>

int main(){
  const float PI = 18.1898; // It is always a good convention to name the constant datatypes in capital
  PI = 328; // Will return error since it is a immutable value, which is a added security in real world cases
  return 0;
}
/*
  main.c: In function ‘main’:
  main.c:5:8: error: assignment of read-only variable ‘PI’
    5 |     PI = 420; */
  // The above is the error that it returns
  
