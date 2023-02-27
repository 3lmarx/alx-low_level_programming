#include "main.h"

/**
 *strlen
 *
 *function that returns
 *length of string
 *
 *Return: length of string
 *
 */

int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
count++;
return (count);
}
