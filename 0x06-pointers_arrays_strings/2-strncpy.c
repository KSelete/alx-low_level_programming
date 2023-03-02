#include "main.h"

/**
 * _strncpy - function that copies a string
 * code by KSelete
 * @dest: the input value
 * @src: the input value
 * @n: the int value for the parameters of the function
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest)
}
