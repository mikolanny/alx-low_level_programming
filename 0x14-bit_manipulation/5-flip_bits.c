#include "main.h"

/**
 *flip_bits counts how many bits need to be flipped in n to be m
 *@n: the original number
 *@m: the number n would flip into
 *Return: the number of bits that would need to be flipped for n to became m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned int number;

	number = 0;
	output = n ^ m;
	while (output != 0)
	{
		if ((output & 1) == 1)
			number++;
		output = output >> 1;
	}
	return (number);
}
