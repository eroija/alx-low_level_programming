#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function to find length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcopy - copies string to a buffer
 * @dest: destination storing string copy
 * @src: source of string
 * Return: pointer to destination
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: ownner of dog
 * Return: pointer to new dog or
 * null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggi = malloc(sizeof(dog_t));
	if (doggi == NULL)
		return (NULL);

}

















