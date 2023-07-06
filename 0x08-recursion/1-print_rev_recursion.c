#include "main.h"
/**
 * _print_rev_recursion - prints strings in reverse
 * @s: string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(s);
	}
}
