#include <stdio.h>

/**
 * main - entry point for the application
 * Description: Pints all possbile combination of two digits
 * Return: 0 if execution is successful
 */

int main(void)
{
	int d1 = 0;
	int d2, d3;

	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			d3 = 0;
			while (d3 <= 9)
			{
				if (d1 != d2 && d1 < d2 && d2 != d3 && d2 < d3)
				{
					putchar(d1 + 48);
					puthcar(d2 + 48);
					putchar(d3 + 48);

					if (d1 + d2 + d3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d3++
			}
			d2++
		}
		d1++;
	}

	putchar('\n');

	return (0);
}
