#include "main.h"
#include <string.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
