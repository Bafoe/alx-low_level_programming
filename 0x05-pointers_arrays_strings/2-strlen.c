#include "main.h"


 /**
  * int _strlen - write a function that returns the
  * lenght of a string
  * @s : string
  * Return : lenght
  */

int _strlen(const char *str)
{

int length = 0;

while (*str++)
{
length++;
}
return (length);
}
