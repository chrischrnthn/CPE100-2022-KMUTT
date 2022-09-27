//ID 65070503410 
//Charunthon Limseelo
/*1.Write a C program to check whether an input character in an alphabet, a digit, or a special character*/

#include <stdio.h>

int main(){
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    /*number check*/
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    /*special character check*/
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}