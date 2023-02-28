#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: string to be reversed
 *
 */

void rev_string(char *s)
{
int count = 0, a, b;
char *str, tmp;

while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
str = s;

for (a = 0; a < (count - 1); a++)
{
for (b = a + 1; b > 0; b--)
{
tmp = *(str + b);
*(str + b) = *(str + (b - 1));
*(str + (b - 1)) = tmp;
}
}
}
