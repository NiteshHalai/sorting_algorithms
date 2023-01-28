/**
* quick_sort - Land into the recursive function of quicksort
*
* @array: The array to sort
* @size: The size of the array
*
* Return: Anything, cause void function
*/

void quick_sort(int *array, size_t size) {
    if (size < 2) return;

    int pivot = array[size - 1];
    int i = 0;
    for (int j = 0; j < size - 1; j++) {
        if (array[j] < pivot) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
        }
    }

    int temp = array[i];
    array[i] = pivot;
    array[size - 1] = temp;

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");

    quick_sort(array, i);
    quick_sort(array + i + 1, size - i - 1);
}
Note: The above function will print the array each time two elements are swapped, but it should be used for debugging purpose.




Nitesh Halai
code will be run with gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 
c
Copy code
void quick_sort(int *array, size_t size) {
    if (size < 2) return;

    int pivot = array[size - 1];
    int i = 0;
    for (int j = 0; j < size - 1; j++) {
        if (array[j] < pivot) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
        }
    }

    int temp = array[i];
    array[i] = pivot;
    array[size - 1] = temp;

    quick_sort(array, i);
    quick_sort(array + i + 1, size - i - 1);
}
