#include "main.h"

#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 *           the constant byte b.
 * @s: Pointer to the memory area.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
void *_memset(void *s, int b, size_t n)
{
	unsigned char *ptr = s;
	unsigned char value = (unsigned char)b;

	for (size_t i = 0; i < n; i++)
		ptr[i] = value;

	return s;
}

