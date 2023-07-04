#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to the first element.
 *
 * Return: the data of the deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
