#include <stdio.h>

int main(void)
{
int my_num;
float my_float;
long int mydouble;
long long int mylng;
char mystring;

printf("size of int: %lu byte(s)\n", sizeof(my_num));
printf("size of float: %lu byte(s)\n", sizeof(my_float));
printf("size of long int: %lu byte(s)\n", sizeof(mydouble));
printf("size of char: %lu byte(s)\n", sizeof(mystring));
printf("size of long long int: %lu byte(s)\n", sizeof(mylng));

return (0);
}
