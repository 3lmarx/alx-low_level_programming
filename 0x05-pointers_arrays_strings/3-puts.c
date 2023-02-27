#include <stdio.h>
#include "main.h"

/**
 *puts
 *
 *function that prints
 *string followed by newline
 *to stdout
 *
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
