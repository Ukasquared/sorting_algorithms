#include "sort.h"

/**
* selection_sort - sorts an array of integer using the selection
* sort algorithm
*
* @array: list of element to sort
* @size: size of array
*
* Return: nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min, index, status;

	status = 0;

	for (i = 0; i < size - 1 && size > 1; i++)
	{
		min = array[i];
		for (j = i; j < size - 1; j++)
		{
			if (array[i] > array[j + 1])
			{
				if (min > array[j + 1])
				{
					min = array[j + 1];
					index = j + 1;
					status = 1;
				}
			}
		}
		if (status == 1)
		{
			temp = array[i];
			array[i] = min;
			array[index] = temp;
			print_array(array, size);
			status = 0;
		}
	}
}
