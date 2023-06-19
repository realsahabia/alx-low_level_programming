#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize
 * a variable of type struct dog.
 * @d: parameter of the name of struct to be passed into function.
 * @name: first element to initialize
 * @age: second element to initialize
 * @owner: third element to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
