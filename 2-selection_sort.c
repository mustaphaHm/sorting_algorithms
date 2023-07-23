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
 * selection_sort - func that sorts array using selection sort
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idxMinVal;

	for (i = 0; i < size - 1; i++)
	{
		idxMinVal = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idxMinVal])
				idxMinVal = j;
		}
		if (idxMinVal != i)
		{
			swap(&array[idxMinVal], &array[i]);
			print_array(array, size);
		}
	}
}
