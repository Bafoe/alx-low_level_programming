#include "main.h"

#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the string containing the accepted characters.
 *
 * Return: Number of bytes in the initial segment of s
 * consisting of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;

	while (*s && found)
	{
		char *a = accept;

		found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				length++;
				break;
			}
			a++;
		}

		if (found)
			s++;
	}

	return (length);
}

