/*
 * This program checks if a number is prime or not.
 * -Gavin O'Leary 3/7/16
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main(void)
{
	int userInput;
	
	printf("Enter a number to check if it's prime: \n");
	scanf("%d", &userInput);

	if (isPrime(userInput) != 1) {
		printf("Your number is prime. \n");
	}
	else {
		printf("Your number is not prime \n");
	}
}
