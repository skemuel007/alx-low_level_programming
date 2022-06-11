#include <stdio.h>

/**
 * square_root - Function name
 * @value: input type of double for argument
 * Description: Finds the square root
 * Return: retuns square root of the value in double
 */
double square_root(double value)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp)  / 2;
	}
	return (sqrt);
}

/**
 * max_prime_factor - Function name
 * @num: input type of long int
 * Description: Finds max prime
 * Return: void
 */
void max_prime_factor(long int num)
{
	int prime_number, max_number;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (prime_number = 3; prime_number <= square_root(num); prime_number += 2)
	{
		while (num % prime_number == 0)
		{
			num = num / prime_number;
			max_number = prime_number;
		}
	}

	if (num > 2)
		max_number = num;
	printf("%d\n", max_number);
}

/**
 * main - Function name
 * Description: entry point for the app
 * Return: 0 if success
 */
int main(void)
{
	max_prime_factor(612852475143);

	return (0);
}
