#include<stdio.h>
int main(){
    int n,e,p;
    printf("Enter no.of elements in the arrays: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {   printf("Enter element of first array: ");
        scanf("%d",&e);
        a[i]=e;}
    printf("Enter search element ");
    scanf("%d",&p);
    for (int i = 0; i<n; i++){
        if (a[i]==p)
        {printf("Element %d is present at index : %d",p,i);
        }
    }
    return 0;
}