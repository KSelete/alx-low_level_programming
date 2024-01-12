#include "main.h"

/**
 * _puts_recursion - a string printing function followed by a line
 * @s: the string that will be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion((s + !));
}
