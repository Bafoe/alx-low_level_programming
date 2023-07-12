#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c);
/*
 * creat_array - this function creats an array of char 
 * and initialize it to specific bar
 * @size : size of charater
 * @c : string
 * Return : return a char
 */

char *buffer;
unsigned int count;
buffer = malloc(size * sizeof(char));

count = 0;
while(count < size)
{
	buffer[count] = c;
	count++;
}
return (buffer);
