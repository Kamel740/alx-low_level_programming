#include "main.h"

/**
 * _islower - cheack if the character is lower case or not
 * written by kamel
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return(1);
	else
		return(0);
}
