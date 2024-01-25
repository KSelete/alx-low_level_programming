#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int n, c;

		if (size <= 0)
			return (-1);

		for (c = 0; c < size; c++)
		{
			n = cmp(array[c]);

			if (n != 0)
			{
				return (c);
			}
		}
	}
		return (-1);
}
