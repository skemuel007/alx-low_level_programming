#include <unistd.h>

/**
 * _putchar - Function name
 * @c: takes input type of character
 *
 * Description: prints a single character
 * Return: value if success otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
