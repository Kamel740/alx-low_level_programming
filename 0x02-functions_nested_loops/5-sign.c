#include "main.h"

/**
 * print_sign -  function that prints the sign of a number
 *@: the numper that we want to cheack the numper
 * Return: 0 or 1 or -1
 * written by kamel
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
