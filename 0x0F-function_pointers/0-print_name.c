#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - will print a name
 * @name: - name of a person
 * @f: this is a pointer to a function
 * Retun: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
