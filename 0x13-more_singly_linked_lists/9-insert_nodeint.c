#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value to store in the new node.
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	current = *head;

	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
