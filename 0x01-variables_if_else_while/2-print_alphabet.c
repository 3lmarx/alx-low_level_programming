#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{

alphabets = tolower(alphabets);
putchar(alphabets);
}
putchar('\n');

return (0);
}
