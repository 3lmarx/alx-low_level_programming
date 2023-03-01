#include "main.h"

/**
 *rev_array - reverses an array of integers
 *
 *@a: array to be reversed
 *@n: number of elements in array
 *
 */

void reverse_array(int *a, int n)
{
int b, c, temp;
b = n - 1;
for (b = 0; b < n / 2; b++)
{
temp = a[b];
a[b] = a[c];
a[c--] = temp;
}
}
