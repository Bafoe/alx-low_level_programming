#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing values
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
	return (NULL);

    /* Calculate the size of the array */
	size = max - min + 1;

	a = malloc(size * sizeof(int));
	if (a == NULL)
	return (NULL);

    /* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	a[i] = min++;

	return (a);
}

