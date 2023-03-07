#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination memory area
 *@src: memroy area to copy from
 *@n: number of times to copy
 *
 *Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int l;
for (l = 0; l < n; l++)
{
dest[l] = src[l];
}
return (dest);
}
