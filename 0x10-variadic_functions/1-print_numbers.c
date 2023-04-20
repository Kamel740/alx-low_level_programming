#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned  int i, k = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", separator);
		k = va_arg(arg, int);
		printf("%d", k);
	}
	printf("\n");
	va_end(arg);
}
