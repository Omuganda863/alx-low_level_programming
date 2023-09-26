#include "lists.h"

/**
 * free_listint - free list
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *log;

	while (head)
	{
		log = head->next;
		free(head);
		head = log;
	}
}
