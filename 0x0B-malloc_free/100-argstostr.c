#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all its arguments.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 * Return: A pointer to the new string, or NULL if an error occurs.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}

	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
	string[k] = '\n';
	k++;
	}

	return (string);
}
