#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chie
 * @name: Le nom du chien.
 * @age: L'âge du chie
 * @owner: Le propriétaire du chie
 *
 * Return: Un pointeur vers le nouveau chien (dog_t), ou NULL si éche
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len, i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	dog->name = malloc(name_len);
	dog->owner = malloc(owner_len);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}


	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}

