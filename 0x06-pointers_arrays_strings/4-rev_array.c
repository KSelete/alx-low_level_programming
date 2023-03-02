#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * code by KSelete
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
