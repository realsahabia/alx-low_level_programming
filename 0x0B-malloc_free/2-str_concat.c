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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}

	unsigned int len3 = len1 + len2 + 1;

	new_str = malloc(len3 * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (int i = 0; i < len2; i++)
	{
		new_str[len1 + i] = s2[i];
	}

	new_str[len3 - 1] = '\0';

	return (new_str);	
}
