#include "main.h"

/**
 * print_alphabet - Name of function
 * Description: Prints alphabets in small letters
 * Return: 0 if the program runs successfully
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
