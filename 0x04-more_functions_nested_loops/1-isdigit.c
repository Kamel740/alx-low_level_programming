#include "main.h"

/**
 *_isdigit - checks for adigit
 *@i: is the input
 *Return: 0 or 1
 *written by kamel
 */

int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
