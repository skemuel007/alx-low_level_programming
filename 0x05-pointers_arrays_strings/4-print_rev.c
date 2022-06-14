#include"main.h"

/**
 * print_rev - Function name
 *
 * @s: string parameter input
 * Return: void
*/
void print_rev(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	for (--count; count >= 0; --count)
		_putchar(s[count]);
	_putchar('\n');
}
