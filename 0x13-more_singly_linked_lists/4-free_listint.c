#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free a linked list.
 * @head: list to free.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
    listint_t *current = head;
    listint_t *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
