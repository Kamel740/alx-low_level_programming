#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creat anew struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner name
 * Retrun: return a pointer to the created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int Nlen, Olen, i;
	
	Nlen = Olen = 0;
	while (owner[Olen++]);
	while (name[Nlen++]);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(doggy->name) * Nlen);
	if (name == NULL)
		return (NULL);
	for (i = 0; i < Nlen; i++)
		doggy->name[i] = name[i];

	doggy->owner = malloc(sizeof(doggy->owner) * Olen);
	if (owner == NULL)
		return (NULL);
	for (i = 0; i < Olen; i++)
		doggy->owner[i] = owner[i];

	doggy->age = age;
	return (doggy);
}
