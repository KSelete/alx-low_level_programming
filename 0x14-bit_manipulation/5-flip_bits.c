#include "main.h"
/**
 * flip_bits - this will return number bit
 * @n: numbers
 * @m: numbers
 * Return: Always 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = n ^ m;

	while (num != 0)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
