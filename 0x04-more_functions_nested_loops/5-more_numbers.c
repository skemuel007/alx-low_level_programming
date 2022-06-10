#include "main.h"

/**
 * more_numbers - Function name
 * Description:  print numbers using nested for
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(i + 48);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
