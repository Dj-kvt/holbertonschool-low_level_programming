#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "", *str;

	va_start(args, format);

	while (format && format[i]) /* Première boucle while */
	{
		printf("%s", separator);
		if (format[i] == 'c') /* Affichage d'un char */
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i') /* Affichage d'un int */
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f') /* Affichage d'un float */
			printf("%f", va_arg(args, double));
		else if (format[i] == 's') /* Affichage d'une string */
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}

