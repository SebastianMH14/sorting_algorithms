#include "sort.h"

/**
 *bubble_sort - unction that sorts an array of integers in ascending order
 *@array: array to sort
 *@size: sizeof array
 *
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int temp, step, i;

	if (size >= 2)
	{

		for (step = 0; step < size - 1; ++step)
		{
			for (i = 0; i < size - step - 1; ++i)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
				}
				print_array(array, size);
			}
		}
	}
}
