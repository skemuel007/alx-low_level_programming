#include "main.h"

/**
 * _print_rev_recursion - prints a string in revers
 * @s: Takes an input type of char pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
