#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
char mystring;
int my_num;
long int mydouble;
long long int mylng;
float my_float;
printf("size of a char: %lu byte(s)\n", sizeof(mystring));
printf("size of an int: %lu byte(s)\n", sizeof(my_num));
printf("size of a long int: %lu byte(s)\n", sizeof(mydouble));
printf("size of a long long int: %lu byte(s)\n", sizeof(mylng));
printf("size of a float: %lu byte(s)\n", sizeof(my_float));
return (0);
}
