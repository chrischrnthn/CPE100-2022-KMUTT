#include <stdio.h>

//Program Prototype
int square(int width); // There is only one argument here.


int main(void)
{
    int x = square(12);
    
    printf("Hello World\n");
    
    printf("Area of square %d == %d", x, square(12));

    return 0;//Normal Program Termination
}

int square(int width) {
    return width*width;
}
