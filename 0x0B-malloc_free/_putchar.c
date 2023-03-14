#include "main.h"
#include <unistd.h>
/**
 * _putchar writes c to stdout
 * @c: The character to print
 * code by KSelete
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	Return (write (1, &c , 1));
}
