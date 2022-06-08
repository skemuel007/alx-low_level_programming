#include "main.h"

/**
 * print_sign - A function to print sign of a number
 * @n: takes an input type of integer n
 * Description: Printing sign of a number
 * Return: 1 is printed if program runs succesfully
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
