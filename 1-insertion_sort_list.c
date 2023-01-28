#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 */


void insertion_sort_list(listint_t **list) {
    listint_t *current, *temp;
    if (*list == NULL || (*list)->next == NULL)
        return;
    current = (*list)->next;
    while (current != NULL) {
        temp = current->prev;
        while (temp != NULL && temp->n > current->n) {
            temp->next->prev = temp->prev;
            if (temp->prev != NULL)
                temp->prev->next = temp->next;
            else
                *list = temp->next;
            current->prev = temp;
            temp->next = current;
            temp->prev = temp->prev->prev;
            if (temp->prev != NULL)
                temp->prev->next = temp;
            print_list(*list);
            temp = temp->prev;
        }
        current = current->next;
    }
}
