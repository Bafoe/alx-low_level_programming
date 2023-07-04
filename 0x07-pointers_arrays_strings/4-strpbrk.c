#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the first matching byte in s,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int found;

	while (*s)
	{
		p = accept;
		found = 0;

		while (*p)
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
			p++;
		}

		if (found)
			return (s);

		s++;
	}

	return (NULL);
}

