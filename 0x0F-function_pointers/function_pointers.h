#ifdef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name,void(*f)(char *);
int _putchar(char c);
void array_iterator(int *arary, size_t size,void(*actoin)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
