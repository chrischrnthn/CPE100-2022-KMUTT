#include <stdio.h>

int main ()
{
  int num1, num2;
  printf("Input the first number: ");
  scanf("%d", &num1);
  
  printf("input the second number: ");
  scanf("%d", &num2);
  
  printf("Quotient: %d\n", num1/num2);
  printf("Remainder: %d", num1%num2);
}
