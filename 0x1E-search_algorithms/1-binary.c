#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The index of the first occurrence of @value in @array,
 *         or -1 if @value is not found or @array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t middle = 0;
    size_t i = 0;

    /* Check if array is not NULL */
    if (array != NULL)
    {
        /* Perform binary search */
        while (left <= right)
        {
            middle = (left + right) / 2;

            /* Print the current subarray being searched */
            printf("Searching in array: ");
            for (i = left; i < right; i++)
            {
                printf("%d, ", array[i]);
            }
            printf("%d\n", array[i]);

            /* Adjust the search range based on comparison with @value */
            if (array[middle] < value)
            {
                left = middle + 1;
            }
            else if (array[middle] > value)
            {
                right = middle - 1;
            }
            else
            {
                return (middle); /* @value found at index @middle */
            }
        }
    }

    return (-1); /* @value not found or @array is NULL */
}
