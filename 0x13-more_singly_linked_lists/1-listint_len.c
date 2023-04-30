#include "lists.h"

/**
 * listint_len: returns the number of elements in a linked lists.
 * singly linked list.
 * @h: head of a list.
 *
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nfun = 0;

	while (h != NULL)
	{
		h = h->next;
		nfun++;
	}
	return (nfun);
}
