#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Appelle une fonction pour afficher un nom
 * @name: Nom de la personne
 * @f: Pointeur vers la fonction d'affichage
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
