#include "lists.h"

/**
 * pop_listint -  that deletes the head node of a linked list.
 * @head: head of a list.
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int bnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	bnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (bnode);
}
