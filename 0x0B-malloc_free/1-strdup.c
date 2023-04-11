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
	unsigned int m, n;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)

	dest = (char *)malloc(sizeof(char) * (m + 1));

	if (dest == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
		dest[n] = str[n];

	return (dest);
}
