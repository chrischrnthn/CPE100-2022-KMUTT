//ID 65070503410
//Name : Charunthon Limseelo

//Second Smallest

#include <stdio.h>
int main(void)
{
    int j, i, min=10000, nmin;
    scanf("%d", &j);
    int num[j];
    int count=0;
    for(i=0; i<j; i++) {
        num[i]=0;
    }
    for(i=0; i<j; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<j; i++){
        if(min>num[i]) {
            min=num[i];
        }
    }
    for(i=0; i<j; i++){
        if(num[i]==min) {
            num[i]=10000;
        }
    }
    min=10000;
    for(i=0; i<j; i++){
        if(min>num[i]) {
            min=num[i];
            nmin=i;
        }
    }
    printf("%d\n%d",min,nmin);
    return 0;
}
