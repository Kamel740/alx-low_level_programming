#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to string to duplicate
 * Return: pointer to duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *kamel;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	kamel = malloc(sizeof(char) * (i + 1));
	if (kamel == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		kamel[r] = str[r];
	}
	return (kamel);
}
