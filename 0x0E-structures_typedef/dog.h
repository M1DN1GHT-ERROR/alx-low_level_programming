#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Details of a dog.
 * @name: first member
 * @age: second member
 * @owner: thid member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
