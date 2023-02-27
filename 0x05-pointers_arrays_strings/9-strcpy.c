#include "main.h"

/**
 *strcpy - copy string pointed to by src
 *including null byte(\0) to the buffer dest
 *
 *Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
int ln , i;
ln = 0;
while (src[ln] != '\0')
{
ln++;
}
for (i = 0; i < ln; i++)
{
dest[i] = src[i];
}
dest [i] = '\0';
return (dest);
}
