#include "main.h"

/**
 *swap
 *
 *swaps value of 
 *two integers
 *
 *@a: pointer to value 1 
 *@b: pointer to value 2
 *
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
