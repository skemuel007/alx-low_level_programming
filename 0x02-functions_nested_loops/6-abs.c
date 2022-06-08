#include "main.h"

/**
 * _abs - Function name
 * @n: argument n to be checked
 * Description: prints the abs value of a number
 * Return: absolutely value if negative
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
