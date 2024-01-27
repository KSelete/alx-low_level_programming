#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - this is a main entry
 * @x: base number
 * @y: exponent
 * Description:function that returns the value of x raised to the power of y.
 * Return: The results of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
