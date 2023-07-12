#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Create an array of characters and initialize it with a specific character.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Return: A pointer to the created array, or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    char *buffer = malloc(size * sizeof(char));

    if (buffer == NULL)
    {
        /* Memory allocation failed */
        return NULL;
    }

    unsigned int count = 0;

    while (count < size)
    {
        buffer[count] = c;
        count++;
    }

    return (buffer);
}
