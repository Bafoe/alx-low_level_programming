#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the string str
 * @str: the string to be copied
 *
 * Return: a pointer to a chasr
 */
char *_strdup(char *str)
{
	int i, n;
	char *w;

	i = 0;
	n = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	w = malloc((sizeof(char) * i) + 1);
	if (w == NULL)
	{
		return (NULL);
	}
	while (n < i)
	{
		w[n] = str[n];
		n++;
	}
	w[n] = '\0';
	return (w);
}
