#include "main.h"

/**
 * _isdigit - Name of the function
 * @c: takes an integer argument
 * Description: Checks if a character is a digit or not
 * Return: Returns 1 if character is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
