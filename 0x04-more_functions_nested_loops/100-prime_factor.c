#include <stdio.h>
#include <math.h>

/**
 * main - Function name
 * Description: entry point for the app
 * Return: 0 if success
 */
int main(void)
{
	long a, maxv;
	long number = 612852475143;
	double square = sqrt(number);
	
	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxv = number / a;
		}
	}
	
	printf("%ld\n", maxv);

	return (0);
}
