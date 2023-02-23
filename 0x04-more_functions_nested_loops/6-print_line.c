#include"main.h"

/**
 * print line - prints _ n times
 *@n: the number of lines to draw
 *Return: void
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
}
