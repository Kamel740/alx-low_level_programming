#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *m = needle;

		while (*k == *m && *m != '\0')
		{
			k++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}
