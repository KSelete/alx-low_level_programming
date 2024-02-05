#include "lists.h"
#include <stdlib.h>

/**
 * my_add_nodeint_end - Adds a new node at the end of a list.
 * @start: Address of the first node of a list.
 * @value: Integer value to insert in the new node.
 *
 * Return: Address of the new node.
 */
listint_t *my_add_nodeint_end(listint_t **start, const int value)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	if (*start == NULL)
	{
		*start = new_node;
		return (new_node);
	}

	current_node = *start;
	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}

