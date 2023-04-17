#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - used to free memroy we allocated
 * @d: pointer to the struct we need to free
 * Return: i dont't know 0_0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
