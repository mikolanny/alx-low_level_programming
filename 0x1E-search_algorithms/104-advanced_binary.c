#include "search_algos.h"
/**
 * recur_binary_search - Recursively search values in an array
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: -1 (not found) or index of value found
 */
int recur_binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2, index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (recur_binary_search(array, mid + 1, value));
		return ((int)mid);
	}
	if (value < array[mid])
		return (recur_binary_search(array, mid + 1, value));

	mid++;
	return (recur_binary_search(array + mid, size - mid, value) + mid);
}
/**
 * advanced_binary - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm and return index of first
 * occurence
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 (not found or null) or index of found element
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = recur_binary_search(array, size, value);
	return ((i >= 0 && array[i] != value) ? -1 : i);

}
