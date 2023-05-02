#include "lists.h"
/*
 * listint_len - return the numper of elements
 * @h: pointer to the linked list
 * Return: numper of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
