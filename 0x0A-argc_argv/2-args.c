#include <stdio.h>
/**
 * main -entry point
 * @argc: arg number
 * @argv: the arg strings
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
int i;

i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
