#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to the first node
 * @n: data to be inserted
 *
 * Return: pointer/NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *append;

	append = malloc(sizeof(listint_t));
	if (append)
		return (NULL);

	append->n = n;
	append->next = *head;
	*head = append;

	return (append);
}
