//ID 65070503410
//Name : Charunthon Limseelo

/*Exercise 2 (5.15) Hypotenuse
**Define a function called "hypotenuse" that calculates the length of the
hypotenus of the right triangle when the other two sides are given. The 
function should take two arguments of type double and return the hypotenuse
as a double***/

//version 1

#include <stdio.h>
#include <math.h>

/* A function prototype. */
double hypotenuse(double side_a, double side_b);

/**
 * The function hypotenuse() takes two double arguments, squares them, adds them together, and returns
 * the square root of the sum
 * 
 * @return The hypotenuse of the triangle.
 */
int main()
{/*******/

    printf("hypo 3, 4: %.2lf\n", hypotenuse(3, 4));
    printf("hypo 5, 12: %.2lf\n", hypotenuse(5, 12));
    printf("hypo 8, 15: %.2lf\n", hypotenuse(8, 15));

    return 0;
}


/**
 * This function takes two doubles as arguments and returns the hypotenuse of a right triangle
 * 
 * @param side_a The length of the first side of the triangle.
 * @param side_b The length of the side of the triangle that is not the hypotenuse.
 * 
 * @return The hypotenuse of a right triangle.
 */
double hypotenuse(double side_a, double side_b)
{/********************************************/

    return sqrt(pow(side_a, 2) + pow(side_b, 2));
}