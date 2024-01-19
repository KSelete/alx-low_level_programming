#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates and calculates the length of a string
 * @string: The input string
 * Return: Length of the string
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - Concatenates the first string with the first n
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes from s2 to concatenate
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, len, i, j;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	p = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < num; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
