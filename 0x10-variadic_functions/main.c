#include "variadic_functions.h"

/**
 * main - Test the print_strings function
 *
 * Return: Always 0
 */
int main(void)
{
	print_strings(", ", 3, "Jay", "Katli", "Kay");
	print_strings(" - ", 4, "One", "Two", "Three", "Four");
	print_strings(NULL, 2, "Hello", "World");
	print_strings(", ", 1, "OnlyOne");
	print_strings(", ", 0); // Edge case with zero strings

	return (0);
}
