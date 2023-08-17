#include "function_pointers.h"
/**
 * int_index - returns the index of elem 1 if no match, else -1
 * @array: array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
