#include <stdio.h>

int main ()
{
  char alphabet;
  printf("input the alphabet: ");
  scanf("%c", &alphabet);
  printf("The uppercase of alphabet you've typed is %c", alphabet-32);
}
