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
	unsigned int temp, i, j;

	if (size >= 2)
	{

		for (i = 0; i < size - 1; ++i)
		{
			for (j = 0; j < size - i - 1; ++j)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
