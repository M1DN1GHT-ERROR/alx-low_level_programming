#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in `s`
 *
 */
char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
