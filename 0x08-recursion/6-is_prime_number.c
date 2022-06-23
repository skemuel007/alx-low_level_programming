#include "main.h"

/**
 * is_prime_number - returns int greater than 0 if prime
 * @n: argument of type integer
 * Return: int type greater than zero if prime
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - prime number checker
 * @n: argument of type int
 * @start: argument of type int
 * Return: an int
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
