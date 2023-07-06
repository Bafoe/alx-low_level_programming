#include "main.h"
/**
 * _puts_recursion - prints a string
 * @*s: string position
 * @s: string
 * Return: nothing
 */

void _puts_recursion(char *s);
{
	if *s == '\0'
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s);
		_putchar(s);
	}
}
