#include "main.h"
#include <stdlib.h>
/**
 * _strlen - will calculate and return the string length
 * @string: string
 * Return: the length of the string
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string [1] != '\0 ; i++)
		;
	return (i);
}
/**
 * string_nconcat - will concatenate byte of s2 as well as s1
 * @s1: string 1
 * @s2: string 2
 * @n: bytes (n)
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, len, i, j;

	num =n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >=_strlen(s2))
		num =_strlen(s2));
	len =_strlen(s1) + num +1;
	p = malloc(sizeof(p*) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; < num; j++)
		p[i + j] = s2[j];
	p[i + j] = '0';
	return (p);
}
