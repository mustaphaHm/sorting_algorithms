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
 * printArray - function that print an array
 * @array: the array
 * @size: size of the array
 * Return: nothing
 */
void printArray(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%d, ", array[i]);
	printf("\n");
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
	bool swapped;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				printArray(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
