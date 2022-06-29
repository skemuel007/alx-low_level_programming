#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: unsigned int param
 * @c: char param
 * Return: char pointer of type array
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);

}
