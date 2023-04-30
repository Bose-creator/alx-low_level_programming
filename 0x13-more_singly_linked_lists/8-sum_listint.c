#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a linked list.
 * @head : head of the list.
 *
 * Return: if the list is empty, return 0.
*/

int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
