#include "lists.h"

/**
 * add_nodeint - append new node
 * @head: poniter
 * @n: n pointer
 *
 * Return: NULL / new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *atom;

	atom = malloc(sizeof(listint_t));

	if (atom == NULL)
		return (NULL);

	atom->n = n;
	atom->next = *head;
	*head = atom;

	return (*head);
}
