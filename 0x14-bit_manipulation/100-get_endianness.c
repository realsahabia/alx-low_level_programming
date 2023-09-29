#include "main.h"

/**
 * get_endianness - func that checks if a machine
 * is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int index = 1;
	char *c = (char *) &index;

	return (*c);
}
