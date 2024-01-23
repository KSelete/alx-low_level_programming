#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - This is the main entry
 * @s: pointer to the char
 * Description: this will print a string, and  a new line will follow
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
