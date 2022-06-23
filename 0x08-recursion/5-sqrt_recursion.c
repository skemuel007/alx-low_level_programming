#include "main.h"

/**
 * _sqrt_recursion - function returns the natural
 * square root of a number
 * @n: type int argument
 * Return: int type
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - calculates the natural square toot of a num
 * @n: type int
 * @x: type int
 * Return: int square root
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
