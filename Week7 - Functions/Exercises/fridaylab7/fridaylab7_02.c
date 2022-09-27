//Name : Charunthon Limseelo
//ID   : 65070503410
//7.2 Min Max

#include <stdio.h>

int MAX(int My_array[], int len);
int MIN(int My_array[], int len);
int main()
{
    int My_array[] = {6,3,15,9,10,50,99,11};
    int len = sizeof(My_array)/sizeof(My_array[0]);
    int numMax = MAX(My_array,len);
    int numMin = MIN(My_array,len);
    printf("Max number = %d\n",numMax);
    printf("Min number = %d",numMin);
    return 0;
}

int MAX(int My_array[],int len){
    int num = My_array[0];
    for(int i=1;i<len;i++){
        if(My_array[i] > num){
            num = My_array[i];
        }
    }
    return num;
}

int MIN(int My_array[],int len){
    int num = My_array[0];
    for(int i=1;i<len;i++){
        if(My_array[i] < num){
            num = My_array[i];
        }
    }
    return num;
}