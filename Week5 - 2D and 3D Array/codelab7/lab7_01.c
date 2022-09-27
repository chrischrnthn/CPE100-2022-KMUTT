//ID 65070503410
//Name : Charunthon Limseelo

//reverse order
#include <stdio.h>
#include <math.h>

int main() {
    int i, a;
    scanf("%d", &a);

    a -= 1;
    int n[a];


    for(i=0; i<= a; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=a; i>=0; i--)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}
