#include "main.h"
/**
 * _memcpy - copies memory location,
 * @dest: dest mem location
 * @src: source memory location.
 * @n: fill bytes
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
