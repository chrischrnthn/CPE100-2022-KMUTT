//ID 65070503410
//Name : Charunthon Limseelo

/*Exercise 2 (5.15) Hypotenuse
**Define a function called "hypotenuse" that calculates the length of the
hypotenus of the right triangle when the other two sides are given. The 
function should take two arguments of type double and return the hypotenuse
as a double***/

//version 2

#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);

int main() {
    double x, y;

/* Asking the user to input the length of side 1 and side 2. */
    printf("Enter the length of side 1: ");
    scanf("%lf", &x);

    printf("Enter the length of side 2: ");
    scanf("%lf", &y);

    /* Printing the length of hypotenuse. */
    printf("The length of hypotenuse is %lf.\n", hypotenuse(x, y));

    return 0;
}

/**
 * It calculates the hypotenuse of a right triangle.
 * 
 * @param a The length of the first side of the triangle.
 * @param b the length of the base of the triangle
 * 
 * @return The hypotenuse of a right triangle.
 */
double hypotenuse(double a, double b)

{
    return sqrt(pow(a, 2) + pow(b, 2));
}