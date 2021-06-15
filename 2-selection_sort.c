#include "sort.h"

/**
 *selection_sort -  function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 *
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, p, tmp;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			p = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[p] > array[j])
				{
					p = j;
				}
			}
			if (p != i)
			{
				tmp = array[i];
				array[i] = array[p];
				array[p] = tmp;
				print_array(array, size);
			}
		}
	}
}
