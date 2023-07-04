#include "main.h"

#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: Pointer to the memory area
 * @b: The constant byte to fill the memory area with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char memory[10];  /* Example memory area */

	/* Fill memory with the constant byte 'A' */
	char *filled_memory = _memset(memory, 'A', 10);

	/* Print the contents of memory */
	for (int i = 0; i < 10; i++)
	{
		putchar(filled_memory[i]);
		putchar(' ');
	}

	return 0;
}

