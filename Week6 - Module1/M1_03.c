//ID 65070503410
//Name : Charunthon Limseelo
//Prime Palindrome

#include <stdio.h>
int main()
{
  int n, t, r = 0, c, d;
  scanf("%d", &n);
  while (1)
  {
    n++;
    t = n;
    // Calculating reverse of the number
    while(t)
    {
      r = r*10;
      r = r + t%10;
      t = t/10;
    }
    // If reverse equals original then it's a palindrome
    if (r == n)
    {
      //find square root by not use #include<math.h>
      float temp,sqrt;
      sqrt=n/2;
      temp=0;
      while(sqrt!=temp){
          temp=sqrt;
          sqrt=(n/temp+temp)/2;
      }
      d = sqrt;
      /* Checking prime */
      for (c = 2; c <= d; c++)
      {
        if (n%c == 0)
          break;
      }
      if (c == d+1)
        break;
    }
    r = 0;
  }
  printf("%d\n",n);
  return 0;
}
