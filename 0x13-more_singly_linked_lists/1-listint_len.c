#include "lists.h"
/**
 * listint_len - calculate the number of elements in a linked
 * @h: Pointer to a list.
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int num = 0;

	ptr = h;
	while (ptr)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
