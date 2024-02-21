#include "sort.h"
/**
 * bubble_sort - sort array lements from minmun to maxmum
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t bs_iter, adj_iter = 0;

	if (size < 2)
		return;
	for (bs_iter = 0; bs_iter < size - 1; bs_iter++)
	{
		for (adj_iter = 0; adj_iter < size - 1 - bs_iter; adj_iter++)
		{
			if (array[adj_iter] > array[adj_iter + 1])
			{
				swap(&array[adj_iter], &array[adj_iter + 1]);
				print_array(array, size);
			}
		}
	}
}
/**
 * swap - function swap two number
 * @num1: first number
 * @num2: second numder
 */
void swap(int *num1, int *num2)
{
	size_t temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
