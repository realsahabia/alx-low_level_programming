#include "lists.h"

/**
 * listint_len - returns the number of elements of listint_t list.
 * @h: this is the pointer to the head of the linked list.
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
