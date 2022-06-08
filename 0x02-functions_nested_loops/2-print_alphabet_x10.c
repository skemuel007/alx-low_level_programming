#include "main.h"

/**
 * print_alphabet_x10 - Name of function
 * Description: Prints the alphabets in lower case 10 times
 * Return: 0 if the program runs successfully
 */
void print_alphabet_x10(void)
{
	char c;

	int counter = 1;

	while (counter <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}
