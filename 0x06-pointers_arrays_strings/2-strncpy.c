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
 * pointed to by src (including the null terminator) to the string pointed to
 * by dest. If the length of src is less than n, the remaining bytes in dest
 * are filled with null bytes until a total of n bytes have been written.
 * If the length of src is greater than or equal to n, the string pointed to
 * by dest will not be null-terminated unless the length of src is n or more,
 * in which case, dest will be null-terminated.
 *
 * FYI: The standard library provides a similar function: strncpy.
 * Run `man strncpy` to learn more.
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

