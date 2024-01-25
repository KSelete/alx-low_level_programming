#include "function_pointers.h"
/**
 * array-iterator - executes a given function on each element of an array
 * @array: the provided array
 * @size: the size of the array
 * @action: a pointer to the function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
