#include"main.h"

/**
 * puts2 - Function name
 * @str: string parameter input
 * Description : prints every other character of a string
 * Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
