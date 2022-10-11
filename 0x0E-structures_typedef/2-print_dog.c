#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->name)
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}
