#include "main.h"

/**
 *_islower - cheack if the character is lower case or not
 *@i: is the char to be cheacked
 * written by kamel
 * Return: 1 if char is lowercase.otherwise 0.
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
