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
	list_t *ptr = malloc(sizeof(list_t));
	int len = 0;

	if (ptr == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
