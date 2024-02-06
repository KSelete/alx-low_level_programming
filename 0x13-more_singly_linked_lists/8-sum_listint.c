#include "lists.h"

/**
 * sum_listint - Sum all of the data (n) in a list
 * @head: Pointer to the head of the list.
 * Return: Integer.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}



