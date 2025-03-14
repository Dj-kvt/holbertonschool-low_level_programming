#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure dog à affiche
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

