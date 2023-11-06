#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure of dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a structure that containe tree element of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
