#include "main.h"

/**
 *sign - sign of a number
 *
 *Return: 1 and + if n is greater than zero
 *
 *Return: 0 and - if n is zero
 *
 *Return: -1 if n is lesser than zero
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}

else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar("\n");
}
