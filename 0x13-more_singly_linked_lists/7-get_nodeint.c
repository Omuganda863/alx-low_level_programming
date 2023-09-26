#include "lists.h"

/**
 * get_nodeint_at_index - returns node
 * @head: 1st node
 * @index: index
 *
 * Return: pointer/ NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *atom = head;

	while (atom && a < index)
	{
		atom = atom->next;
		a++;
	}

	return (atom ? atom : NULL);
}
