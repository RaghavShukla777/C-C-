#include <stdio.h>

int main() {
int s=1 ,n , a=1;
printf("Enter number:");
scanf("%d",&n);
while (a<=n)
{s=s*a;
a=a+1;}
printf("%d is factorial of %d ",n,s);
return 0;
}