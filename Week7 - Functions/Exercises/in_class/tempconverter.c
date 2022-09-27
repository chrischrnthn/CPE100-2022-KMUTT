#include <stdio.h>

//Function Prototype
double convertDegreeCelsius2Fahrenheit(double celsius); // There is only one argument here.


int main()
{
    double DegreeCelsius;
    printf("Enter a degree Celsius: "); 
    scanf("%lf", &DegreeCelsius);
    printf("The degree in Fahrenheit is: %5.2f.", convertDegreeCelsius2Fahrenheit(DegreeCelsius));
   

    return 0;//Normal Program Termination
}

double convertDegreeCelsius2Fahrenheit(double celsius) { // pass by value
    return ((double) (celsius*9/5)+32); // Casting X = (float) (intValue);
}

