#include "variadic_functions.h"

/**
 * print_strings - prints separated strings, followed by a new line
 * @separator: used to separate the strings
 * @n: numbers of string to be separated
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *x;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
			x = "(nil)";
		printf("%s%s", x, (separator != NULL && i < n - 1) ? separator : "");
	}
	printf("\n");
}
