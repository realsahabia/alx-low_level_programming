#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list.
 * @head: a pointer to the pointer of the head of the linked list.
 * @n: the integer value to store in the new node.
 * Return: the address of the new element, or a NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

