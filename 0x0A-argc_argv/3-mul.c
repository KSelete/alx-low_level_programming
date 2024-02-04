#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -main entry.
 * @argc:number of command line arguments
 * @argv: array containing the program command line arguments
 * Description:program that multiplies two numbers.
 * Return:integer
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
