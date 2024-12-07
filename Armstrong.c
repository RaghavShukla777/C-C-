#include <math.h>
#include <stdio.h>
int main()
{
    int i, s, n, c = 0;
    printf("All Armstrong number between 1 and 100 are:\n");
    for (i = 1; i <= 100; i++) 
    {   n = i;
        while (n != 0) {
            n /= 10;
            c++;
        }
        n = i;
        s = pow(n % 10, c)+ pow((n % 100 - n % 10) / 10, c);
        if (s == i) {
            printf("%d ", i);
        }
        c = 0;
    }
}