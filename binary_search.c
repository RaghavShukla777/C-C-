#include<stdio.h>
int main()
{
    int c, f, l, m, n, s;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers: \n", n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&a[c]);
    printf("Enter value to find");
    scanf("%d",&s);
    f = 0;
    l = n - 1;
    m = (f+l)/2;
    while( f <= l )
    {
        if ( a[m] < s )
            f = m + 1;
        else if ( a[m] == s )
        {
            printf("%d found at location %d.", s, m+1);
            break;
        }
        else
            l = m - 1;
        m = (f + l)/2;
    }
    if ( f > l )
        printf("Not found! %d is not present in the list.", s);
    return 0;
}