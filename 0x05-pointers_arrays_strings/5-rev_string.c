#include "main.h"

/**
 * rev_string - reverse a string
 * @s : array
 * Return : string
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;
	while (s[index++])
		len++
			for (index = len - 1; index >= len; index--)
			{
				tmp = s[index];
				s[index] = [len - index - 1];
				[len - index - 1] = tmp;
			}
}
