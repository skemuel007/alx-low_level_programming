#include <stdio.h>

/**
 * main - Print lower and upper alpha
 * Description: Printing lower and upper case alphabets
 * Return: 0 if program runs successfully
 */

int main(void)
{
	char lCh = 'a', uCh = 'A';

	while (lCh <= 'z')
	{
		putchar(lCh);
		lCh++;
	}

	while (uCh <= 'Z')
	{
		putchar(uCh);
		uCh++;
	}

	putchar('\n');

	return (0);
}
