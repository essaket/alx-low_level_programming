#include "dogh"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: input pointer o function
 * @name: input of function
 * @age. input of function
 * @owner: input of function
 *
 * Return: a void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
