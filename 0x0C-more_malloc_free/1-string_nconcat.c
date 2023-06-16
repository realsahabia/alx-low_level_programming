#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string to append other string to.
 * @s2: string to concatenate.
 * @n: number of bytes for s2 to concatenate to s1.
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_index = 0, s2_index = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		new_str = malloc(sizeof(char) * (len1 + n + 1));
	else
		new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!new_str)
		return (NULL);

	while (s1_index < len1)
	{
		new_str[s1_index] = s1[s1_index];
		s1_index++;
	}
	while (n < len2 && s1_index < (n + len1))
		new_str[s1_index++] = s2[s2_index++];

	while (n >= len2 && s1_index < (len1 + len2))
		new_str[s1_index++] = s2[s2_index++];

	new_str[s1_index] = '\0';

	return (new_str);
}
