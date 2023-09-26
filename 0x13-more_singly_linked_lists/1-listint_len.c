#include "lists.h"

/**
 * listint_len - returns number of elements in a linked-ls
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}

	return (index);
}
