#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 & 1 chars
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (len--; len >= 0; len--)
	{
		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}

