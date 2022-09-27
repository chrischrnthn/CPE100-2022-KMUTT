//ID 65070503410
//Name : Charunthon Limseelo

//Find Maximum

#include <stdio.h>
int main(void)
{
    int j, i, max=-100, nmax;
    scanf("%d", &j);
    int num[j];

    for(i=0; i<j; i++){
        num[i]=0;
    }
    for(i=0; i<j; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<j; i++){
        if(max<num[i]){
            max=num[i];
            nmax=i;
        }
    }
    printf("%d\n%d\n",max,nmax);
    return 0;
}
