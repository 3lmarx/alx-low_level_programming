#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int digi;
for (digi = '0'; digi <= '9'; digi++)
{
putchar(digi);
if (digi == '9')
{
digi = 'a';
for (; digi <= 'f'; digi++)
{
putchar(digi);
}
break;
}
}
putchar('\n');
return (0);
}
