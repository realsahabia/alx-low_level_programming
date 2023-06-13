#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, len3;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}

	len3 = len1 + len2 + 1;

	new_str = malloc(len3 * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	if (s1)
	{
		while (i < len1)
		{
			new_str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (j < len2)
		{
			new_str[len1 + j] = s2[j];
			j++;
		}
	}
	new_str[len3] = '\0';
	return (new_str);
}
