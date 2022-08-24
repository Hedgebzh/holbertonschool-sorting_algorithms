#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i = 0, min, tmp;
	size_t j, k;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		min = array[i];
		for (k = j + 1; k < size; k++)
		{
			if (array[k] < min)
			{
				min = array[k];
				i = k;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[j] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
