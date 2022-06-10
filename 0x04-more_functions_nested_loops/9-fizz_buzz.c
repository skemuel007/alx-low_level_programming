#include <stdio.h>

/**
 * fizz_buzz - Function name
 * Description: Prints fizz buzz
 * Returns: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
}
