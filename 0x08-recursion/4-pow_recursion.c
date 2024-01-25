#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - this is a main entry
 * @x: int
 * @y: int
 * Description:function that returns the value of x raised to the power of y.
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		reurn (-1);
	}
	else
	{
	if (y == 0)
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
