#include "lists.h"

/**
 * add_nodeint_end - adds a node.
 * @head: pointer.
 * @n: data to insert at new position
 *
 * Return: pointer/ NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *append;
	listint_t *atom = *head;

	append = malloc(sizeof(listint_t));
	if (append)
		return (NULL);

	append->n = n;
	append->next = NULL;

	if (*head == NULL)
	{
		*head = append;
		return (append);
	}

	while (atom->next)
		atom = atom->next;

	atom->next = append;

	return (append);
}
