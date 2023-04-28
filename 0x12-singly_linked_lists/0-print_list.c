#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: the number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
=======
 * print_list - prints all the elements of a linked list
 * @h: the pointer to the list_t list to print
 *
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k;
	k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}

>>>>>>> 9539037783a33999eedba78b7c94b6351a5830d3
	return (k);
}
