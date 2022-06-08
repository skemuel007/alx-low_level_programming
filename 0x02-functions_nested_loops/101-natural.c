#include "main.h"

/**
 * main - entry point
 * Description: gets multiples
 * Return: 0 if success
 */
int main(void)
{
	int sum, counter;

	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
			sum += counter;
	}
	printf("%d\n", sum);

	return (0);

}
