#include "main.h"

/**
 * print_diagonal - Function name
 * @n: takes int argument for number of times
 * Description: prints the new line char n times
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
					_putchar(32);
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
