#include "main.h"

/**
 * _strncat - Function name
 * @dest: Argument of type string and pointer
 * @src: Argument of type string and a pointer
 * @n: Argument of type integer
 *
 * Description: Concatenates two strings at certian length
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	l = 0;

	while (dest[l++])
	{
		l++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[l + i] = src[i];
	}

	dest[l + i] = '\0';

	return (dest);
}
