#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of arguments added
 * @...: it let you put as mush arguments as you want
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned  int i;
	unsigned int k = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
