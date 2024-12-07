#include <stdio.h>
int main() {
int n,s,t=0;
printf("Enter number: ");
scanf("%d",&n);
if (n%2==0)
{
   s=n/2;
}
else
{
   s=(n-1)/2;
}
while (s>1)
{
   if (n%s==0)
   {
    t=t+1;
   }
   s=s-1;
}
if (t=0)
{
    printf("%d is a prime number",n);
}
else
{
    printf("%d is not a prime number",n);
}
return 0;
}