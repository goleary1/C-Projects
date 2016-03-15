#include <stdio.h>

long factorial(int);

int main()
{
	int userInput;
	long fact;

	printf("Enter a positive integer:\n ");
	scanf("%d", &userInput);

	fact = factorial(userInput);

	printf("Factorial is %ld\n", fact);

	return 0;
}

long factorial(int number)
{
	if (number <= 1) {
		return 1;
	}
	else {
		return (number * factorial(number - 1));
	}
}
