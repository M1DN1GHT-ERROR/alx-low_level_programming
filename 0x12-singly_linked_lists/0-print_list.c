#include "lists.h"
#include <stdio.h>

/**
 * size_t - prints all the elements of a list_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
