#include "main.h"
/**
 * print_rev - write a function that prints a string in rev
 * @s : a string
 * Return : string
 */

void print_rev(char *s)
{
	for (; *s != '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
