#include "main.h"

/**
 * main - start of program execution
 * Description: Fibonnocci number 1
 * Return: 0 if successful
 */
int main(void)
{
	int counter = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (counter < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
		counter++;
	}

	return (0);
}
