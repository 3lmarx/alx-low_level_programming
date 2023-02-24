#include "main.h"

/**
 *main - prints lower case alphabets
 *
 *Return: Always 0
 *
 */

void print_alphabet(void)

{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)

{
putchar(letter);
}
putchar("\n");
}
