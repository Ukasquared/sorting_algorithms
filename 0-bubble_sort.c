#include "sort.h"

/**
* bubble_sort - sorts an array of integers
* in ascending order using the Bubble sort algorithm
*
* @array: the data to sort
* @size: size of the array
*
* Return: returns nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int state;

	state = true;

	/* 5, 7, 9, 1, 4, 10, 2, 8, 6, 8 */
	/* create an outer for loop that loops through the array */
	for (i = 0; i < size - 1; i++)
	{
		state = false;
		/* swap value inside inner loop*/
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				state = true;
				print_array(array, size);
			}
		}
		if (state == false)
			break;
	}
}
