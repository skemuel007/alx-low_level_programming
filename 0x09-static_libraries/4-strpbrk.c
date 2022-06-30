#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set bytes
 * @s: pointer of type char
 * @accept: pointer of type char
 * Return: a pointer to the byt in s that matches one of
 * the bytes in acceept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}

	return (0);
}
