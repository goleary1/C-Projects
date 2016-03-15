#include <stdio.h>

int isPrime(int);

int main(void)
{
	int userInput, result;

	printf("Enter an integer: \n");
	scanf("%d", &userInput);

	result = isPrime(userInput);

	if (result == 1)
		printf("%d is prime \n", userInput);
	else
		printf("%d is not prime \n", userInput);

	return 0;
}

int isPrime(int n)
{
	int i;
	for (i = 2; i<= n - 1; i++)
	{
		if (n % i == 0)
			return 0;
	}
	if (i == n)
		return 1;
}


