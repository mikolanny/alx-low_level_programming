#include "main.h"

/**
 * get_endianness- checks the endianness
 * Return: 0 if big endian and 1 if little endian 0
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
