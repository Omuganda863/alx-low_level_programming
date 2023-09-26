#include "lists.h"

/**
 * sum_listint - sum of  data in listint_t list
 * @head: 1st node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *atom = head;

	while (atom)
	{
		add += atom->n;
		atom = atom->next;
	}

	return (add);
}
