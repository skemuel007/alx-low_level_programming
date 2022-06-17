#include "main.h"

/**
 * _strncpy - Function name
 * @dest: char pointer
 * @src: char pointer
 * @n: integer argument
 *
 * Description: String copy
 * Return: copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
