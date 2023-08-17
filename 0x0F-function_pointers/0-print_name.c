#include <stdlib.h>
#include "function_pointers.h"

/**
 * print name - command to print a name
 * @name: a name will print
 * @f: pointer to the function that prints a name
 * Return: nothing on success
 */
void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
