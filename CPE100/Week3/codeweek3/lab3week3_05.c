#include <stdio.h>

int main() 
{
    float n1, n2;
    printf("Input the first number: ");
    scanf("%f", &n1);
    
    printf("Input the second number: ");
    scanf("%f", &n2);
    
    printf("The product of two number is: %.2f", n1*n2);
}