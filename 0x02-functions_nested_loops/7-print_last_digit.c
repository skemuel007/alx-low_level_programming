#include "main.h"

/**
 * print_last_digit - Function name
 * @n: argument of type integer
 * Description: prints the last digit of an integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	{
		n = (-1) * n;
		rem = n % 10;
	}
	else
	{
		rem = n % 10;
	}
	_putchar(rem + '0');
	return (rem);
}
