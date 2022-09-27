//Name : Charunthon Limseelo
//ID   : 65070503410
//7.6 Smallest Number First

#include <stdio.h>

int small(int count);
int main()
{

    int count;

    scanf("%d", &count);

    small(count);

    return 0;
}

int small(int count)
{

    int i, j, temp, temp1, zero;
    int number[1000];
    zero = 0;

    for (i = 0; i < count; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        if (number[i] == 0)
        {
            zero++;
        }
    }
    for (i = 0; i < zero; i++)
    {
        for (j = i + 1; j < zero + 1; j++)
        {
            if (number[i] == 0)
            {
                temp1 = number[i];
                number[i] = number[j];
                number[j] = temp1;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d", number[i]);
    }

    return 0;
}