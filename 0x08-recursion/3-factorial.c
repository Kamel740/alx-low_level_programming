#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	s  = n * factorial(n - 1);
	return (s);
}
