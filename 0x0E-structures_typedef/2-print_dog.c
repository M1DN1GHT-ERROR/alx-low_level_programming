#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- prints a struct dog.
 *
 * @d: struct dog to print
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
