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
* binary_search - searches for a value in an array of
* integers using the Binary search algorithm
* @array: pointer to the first value of the array to search in
* @size: number of elements in array
* @value: value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (size == 0 || !array)
		return (-1);

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
