#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
    int jump_step, block, step, previous;

    if (array == NULL || size == 0)
        return (-1);

    jump_step = (int)sqrt((double)size);
    block = 0;
    previous = step = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", step, array[step]);

        if (array[step] == value)
            return (step);
        block++;
        previous = step;
        step = block * jump_step;
    } while (step < (int)size && array[step] < value);

    printf("Value found between indexes [%d] and [%d]\n", previous, step);

    for (; previous <= step && previous < (int)size; previous++)
    {
        printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
        if (array[previous] == value)
            return (previous);
    }

    return (-1);
}
