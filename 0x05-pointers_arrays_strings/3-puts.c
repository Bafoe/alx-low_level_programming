#include "main.h"


/**
* _puts - write a function that prints a string
* Return : string
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
