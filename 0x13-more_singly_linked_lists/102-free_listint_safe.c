#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list.
 * @head: List to print.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
