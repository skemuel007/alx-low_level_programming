#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: point array of type char
 * @src: pointer array of type char
 * @n: unsgined int
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
