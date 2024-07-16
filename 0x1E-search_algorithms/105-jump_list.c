#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *arr, size_t len, int val)
{
	size_t step, idx, block_size;
	listint_t *prev_node;

	if (arr == NULL || len == 0)
		return (NULL);

	block_size = (size_t)sqrt((double)len);
	step = 0;
	idx = 0;

	do {
		prev_node = arr;
		step++;
		idx = step * block_size;

		while (arr->next && arr->index < idx)
			arr = arr->next;

		if (arr->next == NULL && idx != arr->index)
			idx = arr->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, arr->n);

	} while (idx < len && arr->next && arr->n < val);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev_node->index, (int)arr->index);

	for (; prev_node && prev_node->index <= arr->index; prev_node = prev_node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev_node->index, prev_node->n);
		if (prev_node->n == val)
			return (prev_node);
	}

	return (NULL);
}
