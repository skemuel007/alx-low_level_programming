#include "main.h"

/**
 * leet - Function name
 * @c: pointer of type char
 * Description: Encodes letters encountered
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i, j = 0;
	int si[] = {97, 101, 111, 116, 108};
	int u[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == si[i] || s[j] == u[i])
			{
				s[j] = n[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
