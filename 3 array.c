#include<stdio.h>
int main(){
    int n,e;
    printf("Enter no.of elements in the arrays: ");
    scanf("%d",&n);
    int a[n], b[n],c[n];
    for (int i = 0; i<n; i++)
    {   printf("Enter element of first array: ");
        scanf("%d",&e);
        a[i]=e;}
    for (int i = 0; i<n; i++)
    {   printf("Enter element of second array: ");
        scanf("%d",&e);
        b[i]=e;}
    for (int i = 0; i<n; i++)
    {  c[i]=a[i]+b[i];}
    printf("Third Array: ");
    for (int i = 0; i<n; i++)
    {  printf("%d ",c[i]);}
return 0;}