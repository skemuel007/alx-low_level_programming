#include "main.h"

/**
 * print_most_numbers - Function name
 * Description: Prints most numbers skipping some
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i);
	}

	_putchar('\n');
}
