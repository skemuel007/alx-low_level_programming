#include "main.h"

/**
 * reverse_array - Function name
 * @a: int pointer
 * @n integer args
 *
 * Description: copies arr
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int t, i;

	i = 0;

	while (i < (n - 1))
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
		i++;
		n--;
	}
}
