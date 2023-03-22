#include "main.h"

/**
 * _isalpha - cheack if the character is lower case or uper case
 * @i: the charcter that we need to cheack
 * Return: 0 or 2
 */

int _isalpha(int i)
{
	if ((i >= 65 && i <= 90) | (i >= 97 && i <= 122))
	return (1);
	else
	return (0);
}
