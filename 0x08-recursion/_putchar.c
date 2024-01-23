#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character 'c' to the standard output (stdout)
 * @c: The character to be printed
 *
 * Return: On success, it returns 1. On error, -1 is returned, and errno is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
