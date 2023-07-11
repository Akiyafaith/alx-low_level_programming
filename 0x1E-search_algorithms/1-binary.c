#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l;

	if (array == NULL)
		return (-1);

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (l = left; l <= right; l++)
		{
			printf("%d", array[l]);
			if (l != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
