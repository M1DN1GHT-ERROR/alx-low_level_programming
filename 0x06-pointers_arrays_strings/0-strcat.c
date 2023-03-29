#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int s1, s2;

	for (s1 = 0; dest[s1] != 0; s1++)
	{
	}

	for (s2 = 0; src[s2] != 0; s2++)
	{
		dest[s1] = src[s1];
		s1++;
	}

	dest[s1] = 0;

	return (dest);
}
