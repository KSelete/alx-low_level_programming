#include "main.h"

/**
 * _strpbrk - locates the first occurence for a set of bytes
 * @s: the string to be searched
 * @accept: the string with the pattern to be matched
 * Return: returns a pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
		}
	}
	return ('\0');
}
