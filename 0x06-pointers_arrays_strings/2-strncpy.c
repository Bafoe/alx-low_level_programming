#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 *
 * Description: The _strncpy function copies at most n bytes from the string
 * pointed to by src.
 */

 char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}

