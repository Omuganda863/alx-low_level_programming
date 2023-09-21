#include "lists.h"

/**
 * add_node_end - Appends new node at the end of a ls
 *@head:  the head list pointer
 *@str: str to be added
 *
 *Return: NULL /address /element
 *
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = dup;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
