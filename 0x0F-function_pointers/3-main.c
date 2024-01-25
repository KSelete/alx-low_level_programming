#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is an entry point
 * @argc: count of argument
 * @argv: arguments
 * Return: = 0
 */
int main(int argc, char *argv[])
{
	int x, y, r;
	int (*p_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p_func = get_op_func(argv[2]);
	if (p_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	r = p_func(x, y);
	printf("%d\n", r);
	return (0);
}
