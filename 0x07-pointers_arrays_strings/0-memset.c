#include "main.h"

/**
 * _memset - Allocates memory to a value
 * @s: pointer of type char
 * @b: variable of type char
 * @n: variable of type int
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n = n - 1;
	}
	return (s);
}
