#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s : string
 * @c : Character to locate
 * Return: pointer to c or NULL is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}

	if (c == '\0')
	{
	return (s);
	}

	return (NULL);
}

