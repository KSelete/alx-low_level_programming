#include "variadic_functions.h"
#include <stdarg.h>
/**
 * rephrase sum_them_all - Calculate the sum of a variable number of parameters.
 * @param n: Number of parameters
 * @param ...: A variable number of parameters to calc the sum of
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
