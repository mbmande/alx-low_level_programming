#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * strlen - find the lenght
 * @c: string to find
 * Return: lenght
 */

int strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
 * strcopy - copy
 * @dest: dest
 * @src: src string
 * Return: copied str
 */

char *strcopy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner name
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len;
	int len2;
	dog_t *ndog;

	len = strlen(name);
	len2 = strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (len + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	strcopy(ndog->name, name);
	strcopy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
