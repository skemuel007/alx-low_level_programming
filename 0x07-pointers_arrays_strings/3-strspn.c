#include "main.h"

/**
 * _strspn - gets the length of a prefix substring and
 * returns the number of bytes in the initial
 * segement of s which consit only of byte from accept
 * @s: pointer of type char
 * @accept: pointter of type char
 * Return: number of bytes in init segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
