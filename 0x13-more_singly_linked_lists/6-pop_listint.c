#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	i = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (i);
}
