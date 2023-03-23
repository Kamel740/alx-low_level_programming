#include "main.h"

/**
 *_isupper - cheack for uppercase letter
 *@i: is the character
 *Return: 0 or 1
 *writtern by kamle
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
