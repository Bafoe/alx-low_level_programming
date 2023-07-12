#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Create an array of characters and
 * initialize it with a specific character.
 * @size: The size of the array.
 * @c: The character used for initialization.
 * Return: A pointer to the created array, or NULL if memor
 * allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int count;
char *buffer;
if (size == 0)
{
return (NULL);
}
buffer =  malloc(size * sizeof(char));
if (buffer == NULL)
{
/* Memory allocation failed */
return (NULL);
}
count = 0;
while (count < size)
{
buffer[count] = c;
count++;
}
return (buffer);
}
