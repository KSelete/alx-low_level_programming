#include "main.h"
#include <stdio.h>
/**
 * main -main entry.
 * @argc:number of command line arguments
 * @argv: array containing the program command line arguments
 * Description:program that prints all arguments it receives.
 * Return:integer
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
