#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 * Return: string reverse
 */
void print_rev(char *s)
{
	int lenght = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	for (n = (lenght - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
