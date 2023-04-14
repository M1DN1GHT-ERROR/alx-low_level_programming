#include "main.h"
#include <stdlib.h>
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
