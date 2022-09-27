//ID 65070503410
//Name : Charunthon Limseelo

//stat (Mean,Mode,SD)

#include <stdio.h>
#include <math.h>

int main()
{
    int n[100] , i  , input , sum = 0 , count = 0 , sdnon = 0 , countsd = 0;
    float mean , sdnon2 , sd;

    scanf("%d",&input);

    for(i = 0 ; i <= input - 1 ; i++)
    {
        scanf("%d",&n[i]);
        sum = sum + n[i];
        count++;
    }
    mean = (float) sum / (float) count;
    printf("%.2f\n" , mean);

    for(i = 0 ; i <= input - 1 ; i++)
    {
        sdnon = sdnon + pow(n[i] - mean , 2);
        countsd++;
    }

    sdnon2 = (float) sdnon / (float) countsd;
    sd = sqrt(sdnon2);
    printf("%.2f", sd);

    return 0;
}
