#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arguments supplied
 * @argv: array of pointers to arguments
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*funct)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98)
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	funct = get_op_func(argv[2]);
	if (!funct)
	{
		printf("Error\n");
		exit(99);
	}
	0 = *argv[2];
	if ((0 == '/' || 0 == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = funct(arg1, arg2);
	printf("%d\n", result);
	return (0);
}

