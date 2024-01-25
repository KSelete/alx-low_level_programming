#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - this function adds integers
 * @a: an integer
 * @b: an int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function subtracts two integers
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function will multiply two integers
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This funtion will divide two integers
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - This function will return the module of each int
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
