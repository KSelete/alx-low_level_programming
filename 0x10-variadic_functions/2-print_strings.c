#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int c;
	char *word;

	va_start(my_list, n);

	for (c = 0; c < n; c++)
	{
		word = va_arg(my_list, char *);

		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}
		if (c < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_list);
	printf("\n");
}
