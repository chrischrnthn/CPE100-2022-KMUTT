#include <stdio.h>
int main()
{
    int a,b,temp,i;

    printf("\t+---+---+-------+-------+-------+-----------+-------+\n");
    printf("\t| A | B |A and B|A  or B|A XOR B|IF A THEN B|A IFF B|\n");
    printf("\t+---+---+-------+-------+-------+-----------+-------+\n");
    for(i=0;i<4;i++)
    {
        temp=i;
        a=i%2;
        temp/=2;
        b=temp%2;
    printf("\t| %d | %d |   %d   |   %d   |   %d   |     %d     |   %d   |\n",b,a,a&&b,a||b,a^b,a||!b,a && b || !a && !b);
    }
    printf("\t+---+---+-------+-------+-------+-----------+-------+\n");
}
