#include <stdio.h>

int main()
{
  int x = 10;

  printf("%d\n", x);
  // printf("%p\n", &x);

  // int *pointer;
  // pointer = &x;

  int *pointer = &x;

  printf("%p", pointer);
  return 0;
}