#include "main.h"

/**
 * _puts_recursion - fuction pritnt strint with anew line in the end
 * @s: input type string
 * Return :0
 * made by kamle
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
