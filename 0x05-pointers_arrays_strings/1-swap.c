/**
 * swap_int - Function name
 * @a: takes input type of int
 * @b: takes a second param of int
 * Description: Swaps two int type
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
