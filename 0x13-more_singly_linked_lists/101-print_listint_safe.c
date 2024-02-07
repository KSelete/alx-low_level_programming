#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely.
 * @head: List to print.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int y;

	while (head)
	{
		y = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (y > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
