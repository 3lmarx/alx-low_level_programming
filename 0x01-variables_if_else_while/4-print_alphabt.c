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
if (alphabt == 'q' || aplhabt == 'e')
{
continue;
}
putchar(alphabt);
}
putchar('\n');
return (0);
}
