#include "main.h"
/**
 * get_bit - function to get the value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: Always 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & (1UL << index)) != 0);
}
