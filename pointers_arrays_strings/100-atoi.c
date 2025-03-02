#include "main.h"

/**
 * _atoi - Convert character
 * @s: Point
 *
 * Return: covert and return the the result
 */
int _atoi(char *s)
{
	int i = 0, signe = 1, resultat = 0, chiffre_trouve = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			resultat = resultat * 10 + (s[i] - '0');
			chiffre_trouve = 1;
		}
		else if (chiffre_trouve)
			break;
		i++;
	}

	return (resultat * signe);
}

