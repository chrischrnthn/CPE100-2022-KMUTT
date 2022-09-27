// ID 65070503410
// Name : Charunthon Limseelo
// 4. Write a C program to input a number from user and find reverse of the given number.

#include <stdio.h>
int main()
{
  int n, r = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d\n", r);

  return 0;
}