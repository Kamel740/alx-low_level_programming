#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *kamel;
	int i, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\n')
	{
		k++;
	}
	kamel = malloc(sizeof(char) * (i + k + 1));
	if (kamel == NULL)
	{
		return (NULL);
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		kamel[i] = s1[i];
		i++
	}
	while (s2[k] != '\0')
	{
		kamel[i] = s2[k];
		k++, i++
	}
	kamel[i] = '\0';
	return (kamel);
}

