#include "main.h"

/**
 * reverse_array - Function name
 * @a: int pointer
 * @n: integer args
 *
 * Description: copies arr
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int t, i, m;

	i = 0;
	m = n - 1;

	while (i < m)
	{
		t = a[i];
		a[i] = a[m];
		a[m] = t;
		i++;
		m--;
	}
}
