#include "main.h"

/**
 * swap_int - Swaps the values of two integer
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
