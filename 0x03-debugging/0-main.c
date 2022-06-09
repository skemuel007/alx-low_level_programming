#include "main.h"

/**
 * main - tests functions that prints if integer is positive or negative
 * Description: Learning to debug by calling user defined function
 * Return: 0 of type int if the program runs successfully
 */
int main(void)
{
	int i;

	for (i = -2; i < 2; i++)
	{
		positive_or_negatvie(i);
	}

	return (0);
}
