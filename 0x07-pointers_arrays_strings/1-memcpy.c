#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
