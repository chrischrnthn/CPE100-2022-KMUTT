#include <stdio.h>

int main ()
{
  int num;
  printf ("Enter the number: ");
  scanf ("%d", &num);
  if (num >= 65 && num <= 90)
    {
      printf ("The alphabet from the ASCII code is %c", num);
    }
  else
    {
      printf ("The number that you've filled is INVALID");
    }
}
