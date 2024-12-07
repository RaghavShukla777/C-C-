#include<stdio.h>
void insertionSort(int a[], int n)
{   int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
    while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void selectionSort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        t = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[t])
                t = j;
        if (a[j]>a[j+1]){   
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;}
    }
}
int main(){
    int x,n,t;
    printf("Enter no.of elements in the arrays: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {   printf("Enter element of first array: ");
        scanf("%d",&t);
        a[i]=t;}
    printf("Enter 1 to use insertion sort and 2 to use selection sort: ");
    scanf("%d",&x);
    if (x==1){
        insertionSort(a,n);
    }
    else if (x==2){
        selectionSort(a,n);
    }
    else{
        printf("Wrong input");
    }
    printf("Array:");
    for (int i = 0; i<n; i++)
    {   printf(" %d",a[i]);}
    return 0;}
