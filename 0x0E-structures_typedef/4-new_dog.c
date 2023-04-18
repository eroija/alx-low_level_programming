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

	doggi->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggi->name == NULL)
		free(doggi);
		return (NULL);

	doggi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggi->owner == NULL)
		free(doggi->name);
		free(doggi);
		return (NULL);

	doggi->name = _strcopy(doggi->name, name);
	doggi->age = age;
	doggi->owner = _strcopy(doggi->owner, owner);

	return (doggi);

}



















