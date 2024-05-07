#include "search_algos.h"

/**
  * binary_search_ - Searches for a value in a sorted array
  *                  of integers using binary search
  * @array: A pointer to the first element of the array to search
  * @left: The starting index of the [sub]array to search
  * @right: The ending index of the [sub]array to search
  * @value: The value to search for
  *
  * Return: the first index where value is located, otherwise -1
  */

int binary_search_(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		(array[i] > value) ? (right = i - 1) : (left = i + 1);
	}

	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted array
 *			of integers using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwize -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_(array, i / 2, right, value));
}
