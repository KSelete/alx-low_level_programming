#include "lists.h"

/**
 * free_listint_safe - Frees a list safely.
 * @h: Pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (size);

	current = *h;

	while (current)
	{
		size++;
		temp = current->next;
		free(current);
		current = temp;
		if (current >= *h)
			break;
	}
	*h = NULL;

	return (size);
}
