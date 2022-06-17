#include "main.h"

/**
 * string_toupper - Function name
 * @s: pointer to char arg
 * Description: Changes all lower case to upper case
 * Return: upper case
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
