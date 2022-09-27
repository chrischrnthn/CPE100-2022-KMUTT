//Name : Charunthon Limseelo
//ID   : 65070503410
//7.3 Perfect Number


#include <stdio.h>
int check(int num);
void prefect(int min, int max);

int main()
{
    int min, max;
    scanf("%d %d", &min, &max); 
    prefect(min, max);
    return 0;
}

int check(int num)
{
    int i, sum;
     
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
        return 1;
    else
        return 0;
}

void prefect(int min, int max)
{
    int none;

    none = 0;
    while(min <= max || min == max)
    {
        if(min != 0){
        if(check(min))
        {
            printf("%d\n", min);
            none++;
        }
        }
        min++;
    }
    if(none==0){
        printf("None");
    }
}
