#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Check if c is the null terminator */
	if (c == '\0')
		return (s);

	return (NULL);
}

