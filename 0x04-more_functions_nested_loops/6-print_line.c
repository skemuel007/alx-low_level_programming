#include "main.h"

/**
 * print_line - Function name
 * @n: takes a int type
 * Description: prints n times
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
