#include "dog.h"

/**
* init_dog - A function initialixes a variable of type struct dog.
* @d: pointer to struct dog to initialize
* @name: A name to initialize
* @age: An age to initialize
* @owner: The owner to initialize
* Return: No return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
