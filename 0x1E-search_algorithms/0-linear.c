#include "search_algos.h"

/**
* linear_search - hat searches for a value in an array of
* integers using the Linear search algorithm
* @array: a pointer to the first value of the array to search in
* @size: the number of elements in array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
