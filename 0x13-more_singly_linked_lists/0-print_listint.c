#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print all elements
 * @h: Pointer to a list
 * Return: Integer.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int all = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		all++;
		ptr = ptr->next;
	}
	return (all);
}
