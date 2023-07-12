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

char *ptArray;

ptArray = malloc(unsigned int size * sizeof(char));

unsigned int count;
count = 0;
while(count < size)
{
	ptArray[count] = c;
	count++;
}
return (ptArray);
