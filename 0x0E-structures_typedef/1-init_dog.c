#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *Dog;

	user = malloc(sizeof(struct dog));
	if (Dog == NULL)
		return (NULL);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
