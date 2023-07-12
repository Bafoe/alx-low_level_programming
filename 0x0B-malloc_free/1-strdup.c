#include "main.h"
#include <stdlib.h>

/*
 *_strdup - function that returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter.
 *@c : string
 *Return : a pointer to a new string which is a duplicate of the string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int length;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	s = malloc((unsigned int length * sizeof(char))) + 1;
	if (s == NULL)
	{
		return (NULL);
	}
	unsigned int count;
	count = 0;

	while (str[count] != '\0')
	{
		s[count] = str[length];
	}
	s[count] = '\0';
	return (s);
}
