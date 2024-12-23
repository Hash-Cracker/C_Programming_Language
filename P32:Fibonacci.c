#include <stdio.h>

int fibonacci(int n){
	int a = 0; b = 0, temp;
	
	printf("Fibonacci Series: %d, %d", a, b);

	for(int i = 3; i <= n; i++){
		temp = a + b;
		printf(", %d", temp);
		a = b;
		b = temp;
	}
	return 0;
}
int main(){
	int n;
	printf("Enter the number of terms: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Please enter a positive integer.\n");
	} 
	else if (n == 1) {
		printf("Fibonacci Series: 0\n");
							} else {
								fibonacci(n);
						
							}

	return 0;
}
