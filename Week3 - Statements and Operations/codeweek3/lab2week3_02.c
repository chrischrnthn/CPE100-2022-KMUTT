#include <stdio.h>     
int main(){  
    int n, remainder;
    int binary = 0, temp = 1;    
      
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    
    while(n != 0)    
    {
        remainder = n % 2;
        n = n / 2;
        binary = binary + (remainder * temp);
        temp = temp * 10;  
    }    
    printf("\nBinary of Given Number is= %.16d \n", binary);    
    return 0;  
}  