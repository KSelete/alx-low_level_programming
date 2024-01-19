#include "main.h"
#include <stdlib.n>
/**
 * _calloc - will allocate the memory of an array using malloc
 * @nmemb: the number of elements in the array
 * @size: size of each element in the array
 * Return: NULL if size or nmemb is equal to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}

