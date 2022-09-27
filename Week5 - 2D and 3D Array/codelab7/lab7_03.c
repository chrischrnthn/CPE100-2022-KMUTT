//ID 65070503410
//Name : Charunthon Limseelo

//Count the frequency

#include <stdio.h>
int main(void){
    int j, i;
    scanf("%d", &j);
    int num[j];
    int count[101];

    for(i=0; i<j; i++) {
        num[i]=0;
    }
    for(i=0; i<101; i++) {
        count[i]=0;
    }
    for(i=0; i<j; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<j; i++) {
        count[num[i]]++;
    }
    for(i=1; i<101; i++) {
        if(count[i] != 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
   return 0;
}

