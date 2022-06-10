#include "main.h"

/**
 * print_square - Function name
 * @size: takes int type as argument, the size of the sqare
 * Description: Prints a square
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
