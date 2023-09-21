#include "lists.h"

/**
 * list_len - number of elements in a linked ls
 *@h: pointer
 *
 *Return: elements no
*/

size_t list_len(const list_t *h)
	{
		size_t element = 0;

		while (h)
		{
			element++;
			h = h->next;
		}

		return (element);
	}
