#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - get the length of a string.
 * @s: string to evaluate.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	return (strlen);
}

/**
 * *_strcpy - copies the src pointed string
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer where the string is copied.
 * @src: string to be copied.
 * Return: the pointer to dest.
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
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (len1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
