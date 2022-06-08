#include "main.h"

/**
 * num_length - Fuction name
 * @num: argument of type integer
 * Description: Calculates the num length
 * Return: number of digits
 */
int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - main function
 * Description: prints the first fibonacci
 * Return: 0 if successful
 */

int main(void)
{
	int counter, init;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (counter = 1; counter <= 98; counter++)
	{
		if (f1o > 0)
		{
			printf("%lu", f1o);
		}
		init = num_length(mx) - 1 - num_length(f1);

		while (f1o > 0 && init > 0)
		{
			printf("%d", 0);
			--init;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (counter != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
