#include "search_algos.h"

/**
 * print_array - prints the array in a specified format
 * @array: pointer to the first value of the array to search in
 * @beg: first index of the array
 * @end: last index of the array
 *
 * Return: Nothing
*/
void print_array(int *array, int beg, int end)
{
	printf("Searching in array: ");
	for (; beg < end; beg++)
		printf("%d, ", array[beg]);
	printf("%d\n", array[beg]);

}

/**
* eBinary_search - searches for a value in an array of
* integers using the Binary search algorithm
* @array: pointer to the first value of the array to search in
* @left: lowest index of the array
* @right: highest index of the array
* @value: value to search
*
* Return: first index where value is located,
* -1 if array is NULL or value not found
*/
int eBinary_search(int *array, int left, int right, int value)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;

		print_array(array, left, right);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
* exponential_search - searches for a value in an array of
* integers using the Exponential search algorithm
* @array: pointer to the first value of the array to search in
* @size:  number of elements in array
* @value: value to search
*
* Return: first index where value is located,
* -1 if array is NULL or value not found
*/
int exponential_search(int *array, size_t size, int value)
{
	int low;
	size_t index;

	if (!array || size == 0)
		return (-1);

	if (value == array[0])
		return (0);

	for (index = 1; index < size && value > array[index]; index *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		low = index;
	}
	if (index >= size)
	{
		printf("Value found between indexes [%d] and [%ld]\n", low, index - 1);
		return (eBinary_search(array, low, index - 1, value));
	}

	printf("Value found between indexes [%d] and [%ld]\n", low, index);
	return (eBinary_search(array, low, index, value));

}
