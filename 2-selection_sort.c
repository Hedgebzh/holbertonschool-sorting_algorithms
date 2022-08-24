#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	int swap;
	size_t i, j, min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swap = array[i];
			array[i] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
	}
}
