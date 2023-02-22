#include "main.h"
/**
 * print_last_digit - Print last digit
 * @r: number to be checked
 * Return: the last digit number
 */

int print_last_digit(int r)
{
	int IDigit;

	IDigit = r % 10;
	if (IDigit < 0)
	{
		IDigit *= -1;
	}
	_putchar(IDigit + '0');
	return (IDigit);
}
