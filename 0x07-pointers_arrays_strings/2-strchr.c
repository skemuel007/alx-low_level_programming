#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurence of the
 * character c in the string
 * @s: pointer of type char
 * @c: variable of type char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
