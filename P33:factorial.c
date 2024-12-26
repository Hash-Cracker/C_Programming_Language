#include <stdio.h>
unsigned long long factorial(int n){
	if (n == 0 || n == 1){
		return 1;
	}
	return n * factorial(n - 1);
}
int main(){
	int num;
	printf("Enter the number to find the factorial of:\n");
	scanf("%d", &num);

	if (num < 0){
		printf("Factorial of a number cannot be 0\n");
	}else{
		printf("The factorial of %d is: %llu\n", num, factorial(num));
	}
	return 0;
}
