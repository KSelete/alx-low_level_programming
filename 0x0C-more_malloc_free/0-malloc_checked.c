#include <stdlib.h>
/**
 * malloc_checked - will allocate memory using malloc
 * @b: the size of memory that will be allocated
 * Return: this is a pointer that allocates memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
