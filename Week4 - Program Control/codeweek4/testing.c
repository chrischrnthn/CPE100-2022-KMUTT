#include <stdio.h>

int main()
{
    int n, x, y, p, sum, sumx;
    float arm;
    sum = 0, sumx = 0;
    printf("\n Enter the maximum value of n =");
    scanf("%d", &n);
    printf("\n All prime numbers from 1 to %d are: ", n);
    int upper = n < 10? n : 10;
    printf("\nFrom 1 to %d: ", upper);

    for (x = 2; x <= n; x++)
    {
        p = 1;
        for (y = 2; y <= x / 2; y++)
        {
            if (x % y == 0)
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        {
            sum += x;
        }
        if (p == 1 && x != 1)
        {
            printf("%d ", x);
            sumx++;
            arm = (sum * 1.0) / sumx;
        }

        if (x % 10 == 0 && x != n) {
            int upper = (x + 10) > n? n : (x + 10);
            printf("\nFrom %d to %d: ", x + 1, upper);
        }   
    }
}