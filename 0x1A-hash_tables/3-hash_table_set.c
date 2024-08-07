#include "hash_tables.h"
/**
 * @ht: hash table to add or update key/value
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key; it must be duplicated.
 * Return: Returns 1 if the operation succeeds, and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
