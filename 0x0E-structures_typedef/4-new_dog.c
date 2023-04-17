#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creat anew struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner name
 * Return: return a pointer to the created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int nlen, olen, i;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * nlen);
	if (doggy->name == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(sizeof(char) * olen);
	if (doggy->owner == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
