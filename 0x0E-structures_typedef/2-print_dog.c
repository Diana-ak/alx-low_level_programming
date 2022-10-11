#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to print
 */

void print_dog(struct dog *d)
{
	if (d->name)
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %d\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}
