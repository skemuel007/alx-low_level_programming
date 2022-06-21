#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer of type char
 * @to: pointer of type char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
