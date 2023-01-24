#include"sort.h"

/**
* _puts - prints string
*
* @str: input function argument
* @str: input function argument
*
* Return: outpuy
*/

void bubble_sort(int *array, size_t size) {
    int temp;
    size_t i;
    size_t j;
    
    
    for (i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array,size);
            }
        }
    }
}

void print_array(int *array, size_t size) {
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
