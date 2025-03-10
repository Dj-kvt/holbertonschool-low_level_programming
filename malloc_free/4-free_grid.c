#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Libère une grille bidimensionnelle allouée dynamiqueme
 * @grid: Pointeur vers la grille
 * @height: Nombre de lignes de la grille
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

