#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int rec_search(int *arr, size_t len, int val)
{
    size_t mid = len / 2;
    size_t idx;

    if (arr == NULL || len == 0)
        return (-1);

    printf("Searching in array");

    for (idx = 0; idx < len; idx++)
        printf("%s %d", (idx == 0) ? ":" : ",", arr[idx]);

    printf("\n");

    if (mid && len % 2 == 0)
        mid--;

    if (val == arr[mid])
    {
        if (mid > 0)
            return (rec_search(arr, mid + 1, val));
        return ((int)mid);
    }

    if (val < arr[mid])
        return (rec_search(arr, mid + 1, val));

    mid++;
    return (rec_search(arr + mid, len - mid, val) + mid);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *arr, size_t len, int val)
{
    int result;

    result = rec_search(arr, len, val);

    if (result >= 0 && arr[result] != val)
        return (-1);

    return (result);
}
