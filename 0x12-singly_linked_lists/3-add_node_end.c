#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string value to be added to the new node
 *
 * Return: pointer to the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
