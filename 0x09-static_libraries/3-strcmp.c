#include "main.h"

/**
 * _strcmp - Function name
 * @s1: char string s1
 * @s2: char string s2
 *
 * Description: compares two strings
 * Return: 0 if equal less than or greater 0 if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, d;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
		{
			d = s1[i] - s2[i];
		}
		i++;
	}

	return (d);
}
