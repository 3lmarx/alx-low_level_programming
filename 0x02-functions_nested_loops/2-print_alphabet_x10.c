#include <stdio.h>
#include "main.h"

/**
 *main - prints alhathets x10
 *
 *Return: Always 0
 *
 */

void print_alphabet_x10(void)

{
int a , b;
for (a = 0; a <= 9; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
}
_putchar("\n");
}
