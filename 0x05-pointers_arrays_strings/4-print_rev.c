#include "main.h"
/**
 * print_rev - write a function that prints a string in rev
 * @s : a string
 * Return : string
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}
