#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: NULL if str is NULL, else pointer to the new string
 *
 */

char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dest = malloc(sizeof(char) * (i + 1));

	if (dest == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dest[j] = str[j];

	return (dest);
}
