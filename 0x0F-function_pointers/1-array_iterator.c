#include <stdio.h>
#include "function_pointers.h"

/**
 * array iterator - prints a new function given as an input for every elemet in an array
 * @array: array to iterate through
 * @size: the size of the array
 * @action: a function pointer  used
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int n;

	if (!array || !action)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
