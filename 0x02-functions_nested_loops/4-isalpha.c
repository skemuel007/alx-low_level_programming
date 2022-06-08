#include "main.h"

/**
 * _isalpha - isalpha function
 * @c: takes an argument of c
 * Description: This function prints alphabets
 * Return: 1 if successful and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) &&
			(c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
