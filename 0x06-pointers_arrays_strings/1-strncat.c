#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes from src to concatenate
 *
 * Return: Pointer to the resulting string dest
 *
 * Description: The _strncat function appends the string pointed to by src to
 * the end of the string pointed to by dest, overwriting the terminating null
 * byte ('\0') at the end of dest, and then adds a terminating null byte.
 * It will use at most n bytes from src. The src string does not need to be
 * null-terminated if it contains n or more bytes.
 *
 * FYI: The standard library provides a similar function: strncat.
 * Run `man strncat` to learn more.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copy at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Add null terminator to dest */
	dest[dest_len + i] = '\0';

	return (dest);
}

