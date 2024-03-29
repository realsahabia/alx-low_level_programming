#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * in a linked list.
 * @head: pointer to the first node in the list.
 * @idx: the given index to insert node.
 * @n: data to insert in the new node.
 *
 * Return: pointer to the new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);

}
