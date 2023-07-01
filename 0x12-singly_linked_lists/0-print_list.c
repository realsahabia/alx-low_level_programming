#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->string);
		h = h->next;
		s++;
	}

	return (s);
}
