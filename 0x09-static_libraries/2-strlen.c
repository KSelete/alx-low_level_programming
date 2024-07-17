#include "main.h"

/**
 * _strlen - returns striing size.
 * @s: input stringe
 * Return: string size
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
