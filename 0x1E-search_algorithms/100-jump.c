#include "search_algos.h"

/**
* jump_search - searches for a value in an array of
* integers using the jump search algorithm
* @array: pointer to the first value of the array to search in
* @size: number of elements in array
* @value: value to search
*
* Return: the first index where value is located,
* -1 if array is NULL or value not found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t index;
	int low = 0;
	int gap = sqrt(size);

	if (!array || size == 0)
		return (-1);

	for (index = 0; index < size; index += gap)
	{
		if (value > array[index])
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			low = index;
		}
		if (value <= array[index])
			break;
	}
	printf("Value found between indexes [%d] and [%ld]\n", low, index);
	for (index = low; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
