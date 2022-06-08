#include <stdio.h>

/**
 * print_to_98 - Function name
 * @n: takes input n
 * Description: Prints numbers
 * Return: returns series of numbers
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d");
}
