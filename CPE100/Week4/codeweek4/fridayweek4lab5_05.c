// ID 65070503410
// Name : Charunthon Limseelo
// 5. Write a program in C to display the first n terms of Fibonacci series.

#include <stdio.h>
int main()
{
    int fib1= 0, fib2 =1, fib3, num, count =0;

    printf("Enter the range of Fibonacci number: ");
    scanf("%d", &num);
    printf("First %d Fibonacci numbers are : ", num);
    printf("%d ", fib1);
    printf("%d ", fib2);
    count = 2; /* fib1 and fib2 are already used */
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d ", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
