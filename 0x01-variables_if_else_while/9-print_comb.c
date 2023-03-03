#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'prints alphabet in reverse'
 * Return: Always 0 (success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != '9')
		{
			/**If the value of not equal to 9 at the separator */
			putchar(',');
			putchar(' ');
		}
	}
	/** Print a new line */
	putchar('\n');
	return (0);
}
