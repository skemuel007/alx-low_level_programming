#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: argument of type int
 * Return: calculated factorial of type int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
