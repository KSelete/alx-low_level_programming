#include "main.h"

/**
 * binary_to_uint - will print binary
 * @b: point to string 0 and 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int count = 0;

	if (!b)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] < '0' || b[count] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[count] - '0');
		count++;
	}
	return (num);
}
