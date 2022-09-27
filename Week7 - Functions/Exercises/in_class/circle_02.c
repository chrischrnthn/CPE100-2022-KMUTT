#include <stdio.h>
#define PI 3.14159

// Function Prototypes
double area(double r) {
    return PI * r * r;
}

double circ(double r) {
    return 2 * PI * r;
}

// Subprogram = function with no return value
void computeAreaCirc(double r, double *area, double *circ) { 
    *area = PI * r * r;
    *circ = 2 * PI * r;
}

int main(void) {
    
    double radius;
    double area2=1.0, circ2=1.0; // Output
    
    printf("Enter a radius: "); scanf("%lf", &radius);
    
    printf("The area of this circle is: %10.2f.\n", PI * radius * radius);
    printf("The circumference is.     : %10.2f.\n", 2 * PI * radius);
    
    printf("The area of this circle is: %10.2f.\n", area( radius ));
    printf("The circumference is.     : %10.2f.\n", circ( radius ));
    
    // Caller function
    computeAreaCirc(radius, &area2, &circ2); // Pass by reference : Address of area2 and circ2
    
    printf("The area of this circle is: %10.2f.\n", area2);
    printf("The circumference is.     : %10.2f.\n", circ2);

    return 0; // Normal Program Termination
}