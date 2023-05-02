#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all nodes inside linked list
 * @h: pointer to the linked lists
 * Return: the numper of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h-> next;
		num++;
	}
	return (num);
}
