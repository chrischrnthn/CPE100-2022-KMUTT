//ID 65070503410
//Name : Charunthon Limseelo
// 6. Write a program in C to check whether a number is a palindrome or not.

#include <stdio.h>
int main() 
{
    int n, reversed = 0, remainder, original;

    printf("Enter your positive number: ");
    scanf("%d", &n);
    original = n;

    // reversed inter is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if original and reversed are equal
    if (original == reversed) {
        printf("%d is a palindrome. ", original);
    } else {
        printf("%d is not a palindrome. ", original);
    }
}