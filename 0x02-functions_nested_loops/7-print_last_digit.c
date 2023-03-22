#include "main.h"

/**
 * print_last_digit - to print the last digit
 * Return: the last digit
 * @n: is the numper that we want the last digit from it
 * written by kamel
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

}
