#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - A program to print lower case  alphabet except e and q.
*Return: 0 (success)
*/
int main(void)
{
char a, e, q;
e = "e";
q = "q";
for (a = 'a'; a <= 'z'; a++)
{
if (a != e && a != q)
{
putchar(a);
}
putchar('\n');
}
return (0);
}
