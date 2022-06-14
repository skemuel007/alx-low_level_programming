#include"main.h"

/**
 * _puts - Function name
 *
 * @str: string parameter of type s
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
