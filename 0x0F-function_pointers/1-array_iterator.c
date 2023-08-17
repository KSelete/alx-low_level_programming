#include <stdio.h>
#include "function_pointers.h"
/**
 * array iterator - prints a new element of an array on a new one
 * @array: array to be iterated
 * @size: the size of the array
 * @action: a pointer to the function used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
