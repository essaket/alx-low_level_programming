#include "dog.h"
#include <stdlib.h>

/**
 * _length - a function that calcul length of string
 *
 * @c: input string of function
 *
 * Return: length of string
 */

int _length(char *c)
{
	int len = 0;

	while (*c++)
		len++;
	return (len);
}

/**
 * s_copy - function that copy a string in other string
 *
 * @s1: input string of function
 * @s2: input string of function
 *
 * Return: a string
 */

char *s_copy(char *s1, char *s2)
{
	int x = 0;

	for (; s2[x]; x++)
		s1[x] = s2[x];
	s1[x] = '\0';

	return (s1);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: input pointer of function
 * @age: input of function
 * @owner: input pointer of function
 *
 * Return: a new dog or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_length(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_length(owner) + 1));
	if (dog->owner.owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = s_copy(dog->name, name);
	dog->age = age;
	dog->owner = s_copy(dog->owner, owner);

	return (dog);
}
