#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints elements of list_t.
 * @h: pointer to list_t struct.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;
		s++;
	}
	return (s);
}
