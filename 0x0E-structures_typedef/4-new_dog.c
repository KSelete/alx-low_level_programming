#include <stdio.h>
#include "dog.h"

/**
 * strlen - will return the length of a string
 * @s: the string that will be evaluated
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;


	while (s[i] != '\0')
	{
		i++;
	}


	return (i);
}

/**
 * _strcpy - Copies the string pointed by src
 * including the termination null byte (\0)'
 * to the buffer pointed by the dest
 * @dest: Pointer to the buffer where the string is copied
 * @src: String to be copied
 *
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;


	len = 0;


	while (src[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';


	return (dest);
}

/**
 * new_dog - will create a new dog
 * @name: the name of the dog created
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Return: pointed to the new dog to be a success, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);


	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL)
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
