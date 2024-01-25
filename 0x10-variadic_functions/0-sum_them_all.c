#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of a variable number of parameters.
 * @n: Number of parameters
 * @...: A variable number of parameters to calculate the sum of
 * Return: The sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
