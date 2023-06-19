#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct of dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "Name: (nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
