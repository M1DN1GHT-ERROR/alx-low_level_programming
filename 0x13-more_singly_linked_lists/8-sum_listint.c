#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The sum of all the data in the linked list,0 if empty
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	return (sum);
}
