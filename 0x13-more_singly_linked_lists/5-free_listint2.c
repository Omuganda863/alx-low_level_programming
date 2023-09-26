#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *log;

	if (head == NULL)
		return;

	while (*head)
	{
		log = (*head)->next;
		free(*head);
		*head = log;
	}

	*head = NULL;
}
