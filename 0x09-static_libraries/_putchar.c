#include <unistd.h>

/**
 * _putchar - Function name
 * @c: taskes a char input
 * Description: Prints to the stdo
 * Return: printed item
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
