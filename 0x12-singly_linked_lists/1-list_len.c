#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: list-len
 */

size_t list_len(const list_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}
