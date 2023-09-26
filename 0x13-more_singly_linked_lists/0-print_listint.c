#include "lists.h"

/**
 * print_listint - output elements of a linked list
 * @h: linked list
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}

	return (index);
}
