#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv: the strings of the args
 *
 * Return: 0 for success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int n1, n2, p;

	n1 = 0;
	n2 = 0;
	p = 0;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		p = n1 * n2;
		printf("%d\n", p);
	}
	return (0);
}
