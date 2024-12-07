#include <stdio.h>
int main() {
int n,s;
printf("Enter number: ");
scanf("%d",&n);
while (n!=0)
{
 s=s+(n%10);
 n=(n-(n%10))*0.1;
}
printf("Sum of digits :%d",s);
return 0;
}