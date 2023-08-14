#include "dog.h"

/**
* free_dog - A function to make frees memory allocated for a struct dog
* @d: struct dog to free
* Return: No return
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
