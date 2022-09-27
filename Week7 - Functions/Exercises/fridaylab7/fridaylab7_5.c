//Name : Charunthon Limseelo
//ID   : 65070503410
//7.5 Anagram

#include <stdio.h>  

int anagram(int num1[], int num2[], int i, int j);

int main()
{
    int i, j, k;

    scanf("%d",&j);
    int num[j];

    for(i=0; i<j; i++)
    {
        scanf("%d",&num[i]);
    }

    scanf("%d",&k);
    int num1[k];

    for(i=0; i<k; i++)
    {
        scanf("%d",&num1[i]);
    }

    anagram(num, num1, j, k);

    return 0;
}

int anagram(int num1[], int num2[], int i, int j)
{
    int k,l;

    l = 0;
    
    for(i=0; i<j; i++)
    {
        for(k=0; k<j; k++)
        {
            if(num1[i] == num2[k])
            {
                l++;
                break;
            }
        }
    }
    if((l==i)&&(l==j))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}