#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * written by kamel
 */

void print_alphabet_x10(void)
{
char l;
char r = 10;

	for (r = 0 ; r < 10 ; r++)
	{
		for (l = 'a' ; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
