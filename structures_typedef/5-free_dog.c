#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire d'une structure `dog_t`
 * @d: Pointeur vers la structure à libérer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

