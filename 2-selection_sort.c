#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size) {
    int i, j, min_index, temp;
    for (i = 0; i < size-1; i++) {
        min_index = i;
        for (j = i+1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
        for(int k=0;k<size;k++)
            printf("%d ",array[k]);
        printf("\n");
    }
}
