#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int mynum;
for (mynum = '0'; mynum <= '9'; mynum++)
{
putchar(mynum);
}
putchar('\n');
return (0);
}
