#include "sort.h"

/**
 *quick_sort - sorts an array of integers in ascending order using the Quick
 *@array: integers to sort
 *@size: size of array
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	int first, last;

	if (!array || size < 2)
	{
		return;
	}
	first = 0;
	last = size - 1;
	recursion(array, first, last, size);
}

/**
 *partition - quick swap
 *@array: integuers to sort
 *@first: first position
 *@last: last position
 *@size: size of array
 *
 *Return: integer q + 1
 */
int partition(int *array, int first, int last, size_t size)
{
	int q = first - 1, pivot = array[last], i;

	for (i = first; i <= last - 1; i++)
	{
		if (array[i] < pivot)
		{
			q++;
			if (q != i)
			{
				swa_p(&array[q], &array[i]);
				print_array(array, size);
			}
		}
	}
	if (array[q + 1] > array[last])
	{
		swa_p(&array[q + 1], &array[last]);
		print_array(array, size);
	}
	return (q + 1);
}
/**
 * recursion - recursion is recursion
 *@array: integers to sort
 *@first: first position
 *@last: last position
 *@size: size of array
 *
 *Return: void
 */
void recursion(int *array, int first, int last, size_t size)
{
	int tmp;

	if (first < last)
	{
		tmp = partition(array, first, last, size);
		recursion(array, first, tmp - 1, size);
		recursion(array, tmp + 1, last, size);
	}
}

/**
 *swa_p - change position
 *@a: array
 *@b: size
 *
 *Return: void
 */
void swa_p(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
