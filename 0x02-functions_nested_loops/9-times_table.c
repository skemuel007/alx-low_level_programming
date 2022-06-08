#include "main.h"

/**
 * times_table - Function name
 */
void times_table(void)
{
	int counter, multi, product;

	for (counter = 0; counter <= 9 ; counter++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = counter * multi;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);

			_putchar((product %  10) + 48);
		}
		_putchar('\n');

	}
}
