#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - Sorts an array in ascending order with bubble sort.
 *
 * @array: array to be iterated through
 * @size: number of elements in @array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size == 2)
		print_array(array, size);

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
