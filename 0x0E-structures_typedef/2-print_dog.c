#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct  dog
 *
 * @d: input pointer of function
 *
 * Return: a void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, d->age. d->owner);
}
