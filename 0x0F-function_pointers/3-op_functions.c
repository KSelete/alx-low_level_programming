#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mult(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two intergers
 * @a: interger 1
 * @b: interger 2
 * Return: sum of interger 1 and interger 2
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference between interger 1 and interger 2
 * @a: interger 1
 * @b: interger 2
 * Return: the difference between interger 1 and interger 2
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of two intergers
 * @a: interger 1
 * @b: interger 2
 * Return: product of interger 1 and interger 2
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two intergers
 * @a: interger 1
 * @b: interger 2
 * Return: results of the divison between interger 1 and interger 2
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two intergers
 * @a: interger 1
 * @b: interger 2
 * Return: Remainder of the division between interger 1 and interger 2
 */
int op_mod(int a, int b)
{
	return (a % b);
}
