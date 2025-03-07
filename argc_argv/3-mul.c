#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres et affiche le résultat
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si tout fonctionne, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

