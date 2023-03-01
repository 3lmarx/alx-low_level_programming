#include "main.h"

/**
 *_strcat - concetenates two strings
 *
 *@src: the string that needs to be appended in the other string
 *@dest: the string that needs to overwrite the terminating
 *null byte(\0) then adds a terminating null byte(\0)
 *
 *Return: a pointer to the resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
a++;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
