#include "lists.h"
/**
 * print_list - function that prints elements of list_t.
 * @h: pointer to list_t struct.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s[%u]\n", h->str, h->len);

		h = h->next;
		i++;
	}
	return (i);
}
