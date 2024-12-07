#include <stdio.h>
int main() {
int x=0, y=1 ,z=1,n,a=1,t,k;
printf("Enter limit(least number is 3): ");
scanf("%d",&n);
printf ("%d \n%d \n%d \n",x,y,z) ; 
n=n-3;
while (a<=n)
{
    t=z;
    k=y;
    z=z+y;
    y=t;
    x=k;
    printf("%d \n",z);
    a=a+1;
}
return 0;
}