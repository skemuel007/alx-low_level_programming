#include "main.h"

/**
 * more_numbers - Function name
 * Description:  print numbers using nested for
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;

			if (j > 9)
			{
				_putchar(1 + 48);
				k = 10 % j;
			}

			_putchar(k + 48);
		}

		_putchar('\n');
	}
}
