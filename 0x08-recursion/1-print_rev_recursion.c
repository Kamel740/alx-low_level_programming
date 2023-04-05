#include "main.h"

/**
 * _print_rev_recursion - print the rev of a string
 * @s: the string
 * Return :revese string
 * made by kame
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
