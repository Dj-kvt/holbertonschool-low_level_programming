#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers allant de min à max inclus
 * @min: Valeur minimale incluse dans le tableau
 * @max: Valeur maximale incluse dans le tableau
 *
 * Return: Pointeur vers le tableau alloué, NULL en cas d'échec
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* Vérifier si min est supérieur à max */
	if (min > max)
		return (NULL);

	/* Calculer la taille du tableau */
	size = max - min + 1;

	/* Allouer la mémoire pour le tableau */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Remplir le tableau avec les valeurs de min à max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

