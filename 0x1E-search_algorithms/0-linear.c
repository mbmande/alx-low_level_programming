#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the element if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i; /*Declare i outside of the for loop in C90*/

    if (array == NULL) {
        return -1;  /* Return -1 if array is NULL */
    }

    for (i = 0; i < size; i++) {
        printf("Value chelscked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value) {
            return i;  /*Return index if value is found*/ 
        }
    }

    return -1;  /*Return -1 if value is not found*/ 
}
