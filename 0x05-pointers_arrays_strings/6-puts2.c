#include "main.h"

/**
 *puts2 - prints one char out of two of a string
 *followed by a new line
 *
 *@str: string to print the chars from
 *
 */

void puts2(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar("\n");
break;

}
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
_putchar('\n');
}
