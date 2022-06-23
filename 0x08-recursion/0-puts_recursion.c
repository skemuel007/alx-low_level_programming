#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Takes an input pointer of type char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
