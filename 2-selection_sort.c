#include "sort.h"

/**
 * selection_sort - Sort an array by comparing each
 * elem witch the row of the array
 *
 * @array: The array to sort
 * @size: lenght of the array
 *
 * Return: Anything, cause void function
 */
void selection_sort(int *array, size_t size)
{
	int head = 0, tmp = 0;
	size_t i = 0, j = 0;

	if (!array || size <= 1)
	{
		return;
	}
	while (i < size)
	{
		head = array[i];
		tmp = j = i + 1;
		while (j < size)
		{
			if (head > array[j])
			{
				head = array[j];
				tmp = j;
			}
			j++;
		}
		if (head != array[i])
		{
			array[tmp] = array[i];
			array[i] = head;
			print_array(array, size);
		}
		i++;
	}
}
