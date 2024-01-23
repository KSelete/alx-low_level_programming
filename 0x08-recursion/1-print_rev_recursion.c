#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - this will print a string in reverse
 * @s: the string that will be printed
 * Return: returns 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
