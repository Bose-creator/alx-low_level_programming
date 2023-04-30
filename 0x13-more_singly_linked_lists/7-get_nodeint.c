#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns
 * the nth node of a linked list.
 * @head: the head of the list
 * @index: the index of the node, starting at 0.
 *
 * Return: if the node does not exist, return NULL.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}

	return (head);
}
