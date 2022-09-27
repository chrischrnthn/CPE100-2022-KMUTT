#include <stdio.h>

//Program Prototype
int square(int width); // There is only one argument here.
int maximum(int, int, int);


int main(void)
{
    int x = square(12);
    int max;
    printf("Hello World\n");
    printf("Area of square %d == %d\n", x, square(12));
    printf("Maximum value is: %d", maximum(12, 24, 18));

    return 0;//Normal Program Termination
}

int square(int width) {
    return width*width;
}

int maximum(int x, int y, int z) {
    if (x > y) {
        if (x > z) { 
            return x;
        } else {
            return z;
        }
    } else {
        if (y > z) {
            return y;
        } else {
            return z;
        }
    }
    
}
