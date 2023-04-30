#include "lists.h"


/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
