//ID : 65070503410
//NAME : Charunthon Limseelo
//6. find the average of the number lists but need to end with 0 on the list.

#include <stdio.h>

float ans;
float num, a;
float sum = 0;
float count = 0;

int main() {
    printf("Input your numbers: ");
    scanf("%f", &num);

    while(num!=0)
    {
        a = num;
        sum = sum + a;
        count++;
        scanf("%f",&num);
    }

    ans = sum / count;

    printf("The average of the input number is %.2f", ans);
}