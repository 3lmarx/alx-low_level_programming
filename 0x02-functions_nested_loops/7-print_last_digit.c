#include "main.h"

/**
 *function - prints last digit
 *
 *of a number
 *
 *Return: last digit
 *
 */

int print_last_digit(int n)
{
int o;

o = n % 2;
if (o = 0)
{
_putchar(-o + 48);
return (-o);
}
else
{
_putchar(o + 48);
return (o);
}
}
