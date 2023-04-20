#include "function_pointers.h"
/**
 * print_name - used to print aname
 * @name: the name
 * @f: is a pointer to function
 * that used to print the name or manupliat
 * the name
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
