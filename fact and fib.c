#include<stdio.h>
void fib(int x , int y , int n){
    if (x==0)
    {
        printf("%d\t%d",x,y);
    }
    int z =x+y;
    x=y;
    y=z;
    if (n!=0)
    {
        printf("\t%d",y);
        fib(x,y,n-1);
    }}
int fact(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);}}
int main(){
    int n,x;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter 1 to print number of fibonacci and 2 to get factorial:");
    scanf("%d",&x);
    if (x==1)
    {
        fib(0,1,n-2);
    }
    else if (x==2)
    {
        printf("Factorial : %d",fact(n));
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}