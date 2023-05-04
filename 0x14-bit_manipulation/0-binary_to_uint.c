#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
	{
	return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	{
		num <<= 1;
	}
	else if (b[i] == '1')
	{
		num <<= 1;
		num |= 1;
	}
	else
		{
		return (0);
		}
	}

	return (num);
}
