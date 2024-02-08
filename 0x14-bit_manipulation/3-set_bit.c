#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: numbers
 * @index: index
 * Return: Always 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	/**same as *n ^=(1 << ...);*/
	return (1);
}
