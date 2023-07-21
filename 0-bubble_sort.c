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
 * bubble_sort - function that sort an array using Bubble sort
 * @array: pointer to the first node of the array
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
