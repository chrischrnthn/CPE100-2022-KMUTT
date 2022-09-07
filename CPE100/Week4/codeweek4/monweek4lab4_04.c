//ID 65070503410 
//Charunthon Limseelo
/*4. check whether 3 sides can form triangle or not*/

#include <stdio.h>  
  
int main()  
{  
    float a, b, c, flag = 0;  
  
    printf("Enter values for a, b and c\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
    if( a>b && a>c )  
    {  
        flag = ((b+c) > a);  
    }  
    else if( b>c )  
    {  
        flag = ((a+c) > b);  
    }  
    else  
    {  
        flag = ((a+b) > c);  
    }  
  
    if(flag)  
    {  
        printf("Yes, it can make triangle.\n");  
    }  
    else  
    {  
        printf("No, it can't make triangle.\n");  
    }  
  
    return 0;  
}  