#include <stdio.h>

/**
 * main - Entry point of the appplication
 * @argc: size of cmd args
 * @argv: char array of args
 * Return: Success of 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
