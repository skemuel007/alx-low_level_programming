#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated memory space
 * @str: array of char
 * Return: pointer of tye char
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);

	if (m != 0)
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	return (m);
}
