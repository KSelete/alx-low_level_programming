#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'this program prints base 10 numbers'
 * Return: Always 0 (success)
 */
int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(48 + j);
		j++;
	}
	putchar('\n');
	return (0);
}
