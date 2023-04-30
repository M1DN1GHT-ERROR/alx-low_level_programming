#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: Pointer to pointer to the head node of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
		if (current_node == NULL)
		return (-1);
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
