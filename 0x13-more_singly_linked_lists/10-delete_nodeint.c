#include "lists.h"

/**
 * delete_nodeint_at_index - node deletion at specified index
 * @head: pointer
 * @index: index
 *
 * Return: 1 / -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *atom = *head;
	listint_t *cd = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(atom);
		return (1);
	}

	while (a < index - 1)
	{
		if (!atom || !(atom->next))
			return (-1);
		atom = atom->next;
		a++;
	}


	cd = atom->next;
	atom->next = cd->next;
	free(cd);

	return (1);
}
