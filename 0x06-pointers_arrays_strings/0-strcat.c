#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * code by ArchibaldTK
 * @dest: the input value
 * @src: the input value
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
