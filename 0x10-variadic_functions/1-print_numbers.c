#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
