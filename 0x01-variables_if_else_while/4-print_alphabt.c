#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int alphabt;
for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt == 'q' || alphabt == 'e')
{
continue;
}
putchar(alphabt);
}
putchar('\n');
return (0);
}
