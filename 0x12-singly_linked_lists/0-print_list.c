#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the linkede list
 * @h: apointer to the first node in the linked list
 *
 * Return: the number of noded printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
