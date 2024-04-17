#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created hash table, NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = NULL;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds or updates an element in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 * @value: The value string
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node = NULL, *tmp = NULL, *prev = NULL;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[index];
    while (tmp != NULL && strcmp(tmp->key, key) != 0)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    if (tmp != NULL)
    {
        free(tmp->value);
        tmp->value = strdup(value);
        if (tmp->value == NULL)
            return (0);
        return (1);
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    if (ht->array[index] == NULL)
    {
        new_node->next = NULL;
        ht->array[index] = new_node;
    }
    else
    {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }

    if (prev == NULL)
    {
        new_node->sprev = NULL;
        new_node->snext = ht->shead;
        if (ht->shead != NULL)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (ht->stail == NULL)
            ht->stail = new_node;
    }
    else
    {
        new_node->sprev = prev;
        new_node->snext = prev->snext;
        if (prev->snext != NULL)
            prev->snext->sprev = new_node;
        prev->snext = new_node;
        if (new_node->snext == NULL)
            ht->stail = new_node;
    }

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *tmp = NULL;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[index];
    while (tmp != NULL && strcmp(tmp->key, key) != 0)
        tmp = tmp->next;

    if (tmp == NULL)
        return (NULL);

    return (tmp->value);
}

/**
 * shash_table_print - Prints the sorted hash table in order
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *tmp = NULL;

    if (ht == NULL)
        return;

    tmp = ht->shead;
    printf("{");
    while (tmp != NULL)
    {
        printf("'%s': '%s'", tmp->key, tmp->value);
        if (tmp->snext != NULL)
            printf(", ");
        tmp = tmp->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *tmp = NULL;

    if (ht == NULL)
        return;

    tmp = ht->stail;
    printf("{");
    while (tmp != NULL)
    {
        printf("'%s': '%s'", tmp->key, tmp->value);
        if (tmp->sprev != NULL)
            printf(", ");
        tmp = tmp->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *tmp = NULL, *next = NULL;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            next = tmp->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
            tmp = next;
        }
    }

    free(ht->array);
    free(ht);
}

