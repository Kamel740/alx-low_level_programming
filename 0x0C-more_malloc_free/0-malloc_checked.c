#include "main.h"
#include <stdlib.h>

/**
 * main - used to allocate a block of mermorry
 * using the function malloc
 * @b: the amount of memory we want to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (ptr);
}
