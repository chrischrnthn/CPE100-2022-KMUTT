//Name : Charunthon Limseelo
//ID   : 65070503410
//7.2 Max Min



#include <stdio.h>

int minmax(int num[1000],int count);

int main()
{
    int count, a, num[1000];

    scanf("%d", &count);

    for (a = 0; a < count; a++)
    {
        scanf("%d", &num[a]);
    }

    minmax(num,count);
}

int minmax(int num[1000],int count)
{

    int max, min,a;

    max = num[0];
    min = num[0];

    for (a = 1; a < count; a++)
    {
        if (num[a] > max)
        {
            max = num[a];
        }
        else if (num[a] < min)
        {
            min = num[a];
        }
    }

    printf("%d\n", max);
    printf("%d", min);

    return 0;
}