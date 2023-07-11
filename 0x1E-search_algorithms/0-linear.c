#include <stdio.h>
/**
 * linear_search - Searches for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array
 * @value: value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t m;

	if (array == NULL)
		return -1;

	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return m;
	}

	return -1;
}
