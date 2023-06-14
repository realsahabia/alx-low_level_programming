#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of auguments passed into it.
 * @argc: number of arguments.
 * @argv: arrays of arguments.
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
