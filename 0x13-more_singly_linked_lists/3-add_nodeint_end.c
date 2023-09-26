#include "lists.h"

/**
 * add_nodeint_end - appends node
 * @head: pointer
 * @n: data
 *
 * Return: NULL /address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *atom;
	listint_t *pointer = *head;

	atom = malloc(sizeof(listint_t));
	if (atom != NULL)
	{
		atom->n = n;
		atom->next = NULL;
	}
	else
		return (NULL);
	if (pointer != NULL)
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = atom;
	}
	else
		*head = atom;
	return (atom);
}
