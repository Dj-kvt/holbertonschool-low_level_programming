#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Exécute une fonction donnée sur chaque élé
 * @array: Tableau d'entiers
 * @size: Taille du tableau
 * @action: Pointeur vers la fonction à exécuter
 *
 * Return: Rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

