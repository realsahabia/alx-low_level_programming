#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function that count the number of words in a string
 * @s: string to be evaluated.
 * Return: number of words.
 */
int count_word(char *s)
{
	int flag, count, word;

	flag = 0;
	word = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - splits a string into words
 * @str: string to split.
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, length = 0, words, count = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - count;
				k++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
