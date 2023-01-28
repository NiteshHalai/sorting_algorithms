#include "sort.h"

void shell_sort(int *array, size_t size) {
    int gap = 1, temp, i, j;

    while (gap < size)
        gap = gap * 3 + 1;

    while (gap > 1) {
        gap = (gap - 1) / 3;
        for (i = gap; i < size; i++) {
            temp = array[i];
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }

        for (int i = 0; i < size; i++)
            printf("%d ", array[i]);

        printf("\n");
    }
}
