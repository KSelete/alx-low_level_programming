#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *node, int target)
{
	skiplist_t *forward;

	if (node == NULL)
		return (NULL);

	forward = node;

	do {
		node = forward;
		forward = forward->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)forward->index, forward->n);
	} while (forward->express && forward->n < target);

	if (forward->express == NULL)
	{
		node = forward;
		while (forward->next)
			forward = forward->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)node->index, (int)forward->index);

	while (node != forward->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == target)
			return (node);
		node = node->next;
	}

	return (NULL);
}
