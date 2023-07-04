#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node the end of linked list.
 * @head: head node of the list.
 * @n: data for new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;

	else
	{
		listint_t *temp;

		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}

	return (end_node);
}
