#include "lists.h"

/**
 * pop_listint - removes head node
 * @head: pointer
 * Return: data/0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *atom;
	int index;

	if (!head || !*head)
		return (0);

	index = (*head)->n;
	atom = (*head)->next;
	free(*head);
	*head = atom;

	return (index);
}
