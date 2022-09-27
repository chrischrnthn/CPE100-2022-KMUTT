#include <stdio.h>

int main() 
{
    double h, t;
    double g = 10;
    printf("Enter the duration that rock used to drop: ");
    scanf("%lf", &t);
    
    h = 0.5*g*t*t;
    printf("The height of the rock is: %lf", h);
    return 0;
}