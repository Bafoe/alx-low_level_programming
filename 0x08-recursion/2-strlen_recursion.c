#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - return the lenght of string
 * @s: string to return lenght
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		return (1 + _strlen_recursion(s));
	}
}
