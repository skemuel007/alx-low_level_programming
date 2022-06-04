#include <stdio.h>

/**
 * main - Program starts at main
 * Description: Prints all single digit number of base 10
 * Return: 0 if program is successfully executed
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
