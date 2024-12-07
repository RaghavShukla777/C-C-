#include<stdio.h>
int main(){
    int n;
    printf("Enter no.of elements to enter:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for (int i = 1; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        else if (min>a[i])
        {
            min=a[i];
        }
    }
    printf("Maximum and minimum number in the array are %d and %d respectively: ",max,min);
return 0;}