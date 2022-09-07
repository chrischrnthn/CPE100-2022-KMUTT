// ID 65070503410
// NAME : Charunthon Limseelo
// 1. Turn Binary to Decimal without using arrays, %b, while-loop.


#include <stdio.h>
int main(){
    int num, rem, i, decimal = 0, base = 1;
    
    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Converting binary to decimal
    for (i = num; i > 0; i = i/10){
        rem = i % 10;
        decimal = decimal + rem * base;
        base = base * 2;
    }
    
    // Displaying output
    printf("Equivalent decimal number is: %d", decimal);
    
    return 0;
}