#include "lists.h"

/**
 * print_listint - function that prints all elements of linked list.
 * @h: linked list to print.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
