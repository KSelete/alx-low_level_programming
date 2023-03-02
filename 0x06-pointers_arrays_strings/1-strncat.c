#include "main.h"

/**
 * _strncat - funtion that concatenates two strings
 * code by KSelete
 * @dest: the input value
 * @src: the input value
 * @n: the int value for the parameters of the function
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
