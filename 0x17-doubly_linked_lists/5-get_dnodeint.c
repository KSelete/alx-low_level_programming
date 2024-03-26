#include "lists.h"

/**
 * get_dnodeint_at_index - get a node from a doubly-linked list
 * @head: pointer to the beginning of the list
 * @index: the index of the desired node
 * Return: If the requested node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index && head)
		return (get_dnodeint_at_index(head->next, index - 1));
	return (head);
}
