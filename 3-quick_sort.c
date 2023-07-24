#include "sort.h"

/**
 * swap - function that swaps two elements of an array
 * @el1: adrress of the first element
 * @el2: adress of the second element
 * Return: nothing
 */
void swap(int *el1, int *el2)
{
	int tmp;

	tmp = *el1;
	*el1 = *el2;
	*el2 = tmp;
}
/**
 * partition - lomuto partition.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: index of the lowest elemnt.
 * @high: index of the higher element.
 * Return: partition index
 */
int partition(int *array, size_t size, int low, int high)
{
	int *pivot;
	int i = low;
	int j;

	pivot = array + high;
	for (j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				swap(array + j, array + i);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > *pivot)
	{
		swap(array + i, pivot);
		print_array(array, size);
	}
	return (i);
}

/**
 * sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @x: The starting index of the array partition to order.
 * @y: The ending index of the array partition to order.
 * Return: nothing.
 */
void sort(int *array, size_t size, int x, int y)
{
	int p;

	if (x < y)
	{
		p = partition(array, size, x, y);
		sort(array, size, x, p - 1);
		sort(array, size, p + 1, y);
	}
}

/**
 * quick_sort - quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	sort(array, size, 0, size - 1);
}
