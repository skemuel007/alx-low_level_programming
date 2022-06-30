#include "main.h"

/**
 * _islower - Function name
 * @c: integer character
 * Description: Function checks if an int is lower
 * Return: returns 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
