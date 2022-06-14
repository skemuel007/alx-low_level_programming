/**
 * _strlen - Function name
 * @s: argument of type char
 * Description: Gets the length of a character
 * Return: Int, count of the character
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0', ++s)
		++count;

	return (count);
}
