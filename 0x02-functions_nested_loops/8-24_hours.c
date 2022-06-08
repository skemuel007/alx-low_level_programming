#include "main.h"

/**
 * jack_bauer - function name
 * Description: print time
 */
void jack_bauer(void)
{
	int mins, hours;

	for (hours = 0; hours < 23; hours++)
	{
		for (mins = 0; mins < 59; mins++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
