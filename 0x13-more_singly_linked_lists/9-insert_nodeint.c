#include "lists.h"

/**
 * insert_nodeint_at_index - insertion
 * @head: pointer to the 1st node
 * @idx: index for addition
 * @n: data insertion
 *
 * Return: pointer/NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *ptch;
	listint_t *atom = *head;

	ptch = malloc(sizeof(listint_t));
	if (!ptch || !head)
		return (NULL);

	ptch->n = n;
	ptch->next = NULL;

	if (idx == 0)
	{
		ptch->next = *head;
		*head = ptch;
		return (ptch);
	}

	for (a = 0; atom && a < idx; a++)
	{
		if (a == idx - 1)
		{
			ptch->next = atom->next;
			atom->next = ptch;
			return (ptch);
		}
		else
			atom = atom->next;
	}

	return (NULL);
}
