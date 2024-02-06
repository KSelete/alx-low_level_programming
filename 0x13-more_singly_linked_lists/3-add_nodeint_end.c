#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Inserts a new node at the end of a linked list.
 * @head: Pointer to the address of the first node of the list.
 * @n: Integer value to be inserted into the new node.
 * Return: Address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next)
		b = b->next;
	b->next = a;
	return (a);
}
