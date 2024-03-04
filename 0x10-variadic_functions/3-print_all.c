#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _printchar - this function prints char
 * @Description: prints char
 * @list: va_list
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printint - this function prints int
 * @Description: prints int
 * @list: va_list
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}


/**
 * _printfloat - this function prints float
 * Description: prints float
 * @list:va_list
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printstring - this function prints string
 * @list: va_list
 */
void _printstring(va_list list)
{
	char *s = va_arg(list, char *);
	
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * _print_all - this function prints anything
 * @format: all the argument types passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0, start = 0;
	char *s;

	va_start(list, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
		       	case 'c':
				switch (start)
				{
					case 1: printf(", ");
				}
				start = 1;
				printf("%c", va_arg(list, int));
				break;
			case '1':
				switch (start)
				{
					case 1: printf(", ");
				}
				start = 1;
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				switch (start)
				{
					case 1: printf(", ");
				}
				start = 1;
				printf("%f", va_arg(list, double));
				break;
			case 's':
				switch (start)
				{
					case 1: printf(", ");
				}
				start =1;
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf"(%s", s);
				break;
			default:
				break;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
