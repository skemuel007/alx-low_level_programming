#include "main.h"

/**
 * print_triangle - Function name
 * @size: argument of type int for size of traingle
 * Description: Prints a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		space = size - 1;

		for (i = 1; i <= size; i++)
		{
			int count = 0;

			for (j = 1; j <= size; j++)
			{
				if (count >= space)
					_putchar('#');
				else
					_putchar(32);
				count++;
			}
			space--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
