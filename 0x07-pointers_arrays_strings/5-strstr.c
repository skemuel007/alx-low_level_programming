#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: pointer variable of type char
 * @needle: pointer variable of type char
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - 1] > '\0'; j++)
		{
			if (haystack[j] != needle[j])
			{
				brea;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
