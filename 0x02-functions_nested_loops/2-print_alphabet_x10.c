
#include "main.h"
/**
 * print_alphabet_x10 - this prints alpabet ten times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
int c;
int i;
for (c = 'a'; c <= 'z'; c++)
{
for (i = 0; i <= 10; i++)
{
_putchar(c);
}
_putchar('\n');
}
}
