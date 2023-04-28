#include "lists.h"
/**
 * list_len - returns the number of the elements in the list.
 * @h: singly linked list.
 * Return: the number of the elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;
	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
