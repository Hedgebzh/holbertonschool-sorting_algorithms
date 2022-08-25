#include "sort.h"
/**
 * partition - array
 * @array: array
 * @start: start of array
 * @end: end of array
 * @size: size of array
 * Return: position of pivot
 */
int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int i = start, j, temp;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);
}
/**
 * quickSort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @start: start of array
 * @end: end of array
 * @size: size of array
 */
void quickSort(int *array, int start, int end, int size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quickSort(array, start, pivot - 1, size);
		quickSort(array, pivot + 1, end, size);
	}
}
/**
 * quick_sort - quick sorts the array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
