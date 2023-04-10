#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 if little endian and 0 if its big endian
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
