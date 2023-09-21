#include "lists.h"

/**
 * add_node - adds a new node
 *@head: head list pointer
 *@str: str added
 *
 * Return: returns address to the new element /NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	new->str = dup;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);

}
