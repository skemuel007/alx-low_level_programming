#include "main.h"

/**
 * main - program entry point
 * Description : program to print _putchar to the console
 * Return: 0 if program runs successfully
 */
int main(void)
{
	char putChStr[] = "_putchar";
	int lengthOfChStr = sizeof(putChStr) / sizeof(putChStr[0]);

	int i;
	for(i = 0; i < lengthOfChStr; i++)
	{
		_putchar(putChStr[i]);
	}
	_putchar('\n');
	
	return (0);
}
