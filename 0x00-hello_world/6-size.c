#include <stdio.h>

int main()
{
  int my_num;
  float my_float;
  double mydouble;
  char mystring;

  //sizeof opperator evaluates the size of the types
  printf("size of int: %ld bytes\n",sizeof(my_num));
  printf("size of float: %ld bytes\n",sizeof(my_float));
  printf("size of double: %ld bytes\n",sizeof(mydouble));
  printf("size of char: %ld bytes\n",sizeof(mystring));

  return 0;
}
