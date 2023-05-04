#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp;

	tmp = h;
	if (h == '\0')
	{
		return (0);
	}
	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
