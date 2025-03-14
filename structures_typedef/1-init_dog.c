 #include "dog.h"

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog
 * @name: Nom du chien
 * @age: Âge du chie
 * @owner: Nom du propriétair
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

