#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int lenght = 0, index = 0;
	char tmp;

	while (s[index++])
		lenght++;
	for (index = lenght - 1; index >= lenght / 2; index--)
	{
		tmp = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = tmp;
	}
}
