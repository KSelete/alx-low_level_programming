#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _printchar -function that prints char.
 *Description: prints char
 * @list: va_list
 * Return: void
 **/
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int)); /*char made cast to int*/
}
/**
 * _printint -function that prints int.
 * @list: va_list
 * Return: void
 **/
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}


/**
 * _printfloat -function that prints float.
 *Description: Prints float
 * @list: va_list
 * Return: void
 **/
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double)); /*float made cast to double*/
}
/**
 * _printstring -function that prints string.
 * @list: va_list
 * Return: void
 **/
void _printstring(va_list list)
{
	char *s;

s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_all -function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(list, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(list, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		j++;
	}
	printf("\n");
	va_end(list);
}
