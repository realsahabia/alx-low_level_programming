#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to a pointer to the head of the linked list.
 * @n: the integer value to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (tail_node != NULL && tail_node->next != NULL)
		tail_node = tail_node->next;

	if (tail_node == NULL)
		*head = new_node;
	else
		tail_node->next = new_node;

	return (new_node);
}
