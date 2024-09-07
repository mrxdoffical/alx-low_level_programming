#include "dog.h"
#include <stdio.h>
#icnlude <stdlib.h>
/**
 * print_dog - initializes as a dog
 * @d: the dog to init
 * return void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = '(nill)';
	if (d->owner == NULL)
		d->owner = '(nill)';
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
