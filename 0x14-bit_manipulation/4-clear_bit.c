#include "main.h"

/**
 *clear_bit- it sets the value of a bit to 0 at a given index
 *@n: A pointer to a bit
 *@index: the index to set the value
 *Return: -1 if error occurs, otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);/*~ reverses each bit in a value*/

	return (1);
}
