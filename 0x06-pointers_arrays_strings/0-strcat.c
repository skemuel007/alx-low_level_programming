#include "main.h"

/**
 * _strcat - Function name
 * @dest: char string pointer
 * @src: char string pointer second params
 * Description:  concatenates two string
 * Return: returns pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest;

	i = 0;
	len_dest = 0;

	while (dest[i++])
		len_dest++;

	for (i = 0; sr[i]; i++)
		dest[len_dest++] = src[i];

	return (dest);
}
