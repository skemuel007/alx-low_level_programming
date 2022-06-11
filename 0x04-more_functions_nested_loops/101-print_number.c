#include "main.h"

/**
 * print_number - Function name
 * @n: takes an input of n integer
 * Description: Writes integer to output
 * Return: void
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m
	}	

	if ((m / 10 ) > 0)
		print_number(m / 10);

	_putchar((m % 10) + 48);
}
