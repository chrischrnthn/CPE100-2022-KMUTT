//ID 65070503410 
//Charunthon Limseelo
//5. find summation of series 9+99+999+... in n terms

#include <stdio.h>
void main() { 
    long int n,i,t=9;
    int sum =0;
    printf("Input the number or terms :");
    scanf("%ld",&n);
    for (i=1;i<=n;i++) { 
        sum +=t;
        t=t*10+9;
    }
    printf("\nThe sum of the series = %d \n",sum);
}
