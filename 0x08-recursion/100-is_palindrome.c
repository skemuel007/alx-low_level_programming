#include "main.h"

/**
 * is_palindrome - function that returns 1
 * * if a string is a palindrome and 0 if not.
 * @s: string to check
 * Return: true or false if a palindrome
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - checks the length of the string
 * @s: len of string
 * Return: len int
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is palindrom
 * @s: string type argument
 * @len: length of string
 * @index: index of string
 * Return: palindrom of -1 and -0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
