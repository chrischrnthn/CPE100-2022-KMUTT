#include <stdio.h>
#define PI 3.14159

//Function Prototypes

int main(void) {
    double radius;
    printf("Enter a radius: ");
    scanf("%lf", &radius);
    
    printf("Area = %5.2f\n", PI * radius * radius);
    printf("Circumference = %5.2f\n", 2 * PI * radius);
    
    return 0; //Normal Program Termination
}

