#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to print lower and upper case alphabet.
*Return: 0 (success)
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
for (low = 'A'; low <= 'Z'; low++)
{
putchar(low);
putchar('\n');
}
return (0);
}
