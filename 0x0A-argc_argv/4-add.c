#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check a string to see there are digits.
 * @str: the string to be checked.
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int counter;

	counter = 0;

	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
		return (1);
}

/**
 * main - print the name of the program
 * @argc: argument counter
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i; /*use as the counter*/
	int str_to_int;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}
		else
		{
		printf("Error\n");
			return (1);
		}
		i++;
	}


	printf("%d\n", sum);

	return (0);
}
