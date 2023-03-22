#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
*/

int _abs(int i)
{
	if (i < 0)
	{
		i = -1 * i;
		return (-i);
	}
	else
		return (i);
}
