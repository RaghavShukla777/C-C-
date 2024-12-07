#include<stdio.h>
int main(){
    int n,e;
    printf("Enter no.of elements in the arrays: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {   printf("Enter element of the array: ");
        scanf("%d",&e);
        a[i]=e;}
    for (int i = 0; i<n-1; i++){
        for (int j = 0; j<n-i-1; j++){
            if (a[j]>a[j+1]){   
            e=a[j];
            a[j]=a[j+1];
            a[j+1]=e;}}
        }
        
    for (int i = 0; i<n; i++)
    {   printf(" %d ",a[i]);}
    return 0;
}