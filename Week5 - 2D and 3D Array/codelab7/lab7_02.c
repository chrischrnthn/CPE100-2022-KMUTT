//ID 65070503410
//Name : Charunthon Limseelo

//Unique Element

#include <stdio.h>
int main() {
    int k, i;
    scanf("%d", &k);
    int num[k];
    for(i=0; i<k; i++) {
        num[i]=0;
    }
    for(i=0; i<k; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<k; i++) {
        for(int j=0; j<k; j++) {
            if(num[i] == num[j] && i!=j) {
                break;
            }
            else if(j==k-1) {
                printf("%d\n", num[i]);
            }
        }
    }
    return 0;
}
