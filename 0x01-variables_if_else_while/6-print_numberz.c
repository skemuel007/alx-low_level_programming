#include <stdio.h>

/**
 * main - Entry point into the program
 * Description: Prints all single digit number of base 10 starting
 * Return: 0 if program executes successfully
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num % 10 + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
